#!/usr/bin/env bash
# medir.sh - mede o tempo de compilação com gcc (5 rodadas por comando)
#
# Uso (na pasta onde estão os compile_test_<tamanho>KB.c):
#   source medir.sh        # carrega a função uma vez por terminal
#   medir 131 O0
#   medir 131 O2
#
# Também funciona direto, sem carregar:
#   bash medir.sh 131 O0
#
# Saída: dados/codespace/compile_test_<tamanho>_<flag>.txt (sempre acrescenta)

medir() {
  local tam="$1" flag="$2" limite=300
  if [ -z "$tam" ] || [ -z "$flag" ]; then echo "uso: medir <tamanho_KB> <O0|O2>"; return 1; fi
  local src="compile_test_${tam}KB.c"
  local out="dados/codespace/compile_test_${tam}_${flag}.txt"
  [ -f "$src" ] || { echo "arquivo $src não encontrado em $(pwd)"; return 1; }
  [ -x /usr/bin/time ] || { echo "falta o GNU time: sudo apt-get install -y time"; return 1; }
  mkdir -p dados/codespace

  local tmpbin tmptime tmperr
  tmpbin=$(mktemp); tmptime=$(mktemp); tmperr=$(mktemp)

  local temp="indisponível"
  if ls /sys/class/thermal/thermal_zone*/temp >/dev/null 2>&1; then
    temp=$(cat /sys/class/thermal/thermal_zone*/temp 2>/dev/null | awk '{printf "%.1f°C ", $1/1000}')
  elif command -v sensors >/dev/null 2>&1; then
    temp=$(sensors 2>/dev/null | grep -E '°C' | head -n1)
  fi
  [ -z "$temp" ] && temp="indisponível"

  {
    echo "=================================================="
    echo "Início: $(date '+%Y-%m-%d %H:%M:%S')"
    echo "Comando usado: medir $tam $flag"
    echo "Compilação: gcc -$flag $src -o <temporario> (limite ${limite}s por rodada)"
    echo "GCC: $(gcc --version | head -n1)"
    echo "Memória total: $(free -h | awk '/^Mem:/{print $2}')"
    echo "Núcleos: $(nproc)"
    echo "Temperatura: $temp"
    echo "--------------------------------------------------"
  } | tee -a "$out"

  local i rc real kb reais="" n=0 abortou=0
  for i in 1 2 3 4 5; do
    /usr/bin/time -f "%e %M" -o "$tmptime" timeout "$limite" gcc "-$flag" "$src" -o "$tmpbin" 2>"$tmperr"
    rc=$?
    if [ $rc -eq 124 ]; then
      echo "[$(date +%H:%M:%S)] Rodada $i: TIMEOUT (> ${limite}s) - execução interrompida" | tee -a "$out"
      abortou=1; break
    elif [ $rc -ne 0 ]; then
      echo "[$(date +%H:%M:%S)] Rodada $i: ERRO do gcc (código $rc) - execução interrompida" | tee -a "$out"
      head -n 5 "$tmperr" | tee -a "$out"
      abortou=1; break
    fi
    read -r real kb < <(tail -n1 "$tmptime")
    echo "[$(date +%H:%M:%S)] Rodada $i: real=${real}s | pico de memória=$(awk -v k="$kb" 'BEGIN{printf "%.1f", k/1024}') MB" | tee -a "$out"
    reais="$reais $real"; n=$((n+1))
  done

  if [ $abortou -eq 0 ]; then
    echo "Média do tempo real ($n rodadas): $(echo $reais | awk '{s=0; for(i=1;i<=NF;i++) s+=$i; printf "%.3f", s/NF}')s" | tee -a "$out"
  else
    echo "Média não calculada (execução interrompida)" | tee -a "$out"
  fi
  echo "" >> "$out"
  rm -f "$tmpbin" "$tmptime" "$tmperr"
}

# Se for executado direto (bash medir.sh 131 O0), roda a função com os argumentos
if [ "${BASH_SOURCE[0]}" = "$0" ]; then
  medir "$@"
fi

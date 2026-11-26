#!/usr/bin/env bash
# Coleta o cenário do Codespaces (seção Método do relatório).
# Se existir compile_test.c na pasta, mede também real/user/sys/memória por flag.

OUT=info_codespace.txt
ARQ=${1:-compile_test.c}
REP=5

{
echo "===== DATA ====="
date

echo; echo "===== SISTEMA OPERACIONAL ====="
grep -E '^(PRETTY_NAME|VERSION)=' /etc/os-release
uname -srmo

echo; echo "===== CPU ====="
echo "nproc: $(nproc)"
lscpu | grep -E 'Model name|Architecture|^CPU\(s\)|Thread|Core|Socket|MHz|L2|L3'

echo; echo "===== MEMÓRIA ====="
free -h
grep -E 'MemTotal|MemAvailable|SwapTotal|^Cached' /proc/meminfo

echo; echo "===== LIMITES DE CGROUP (o que o contêiner pode usar) ====="
if [ -f /sys/fs/cgroup/memory.max ]; then
  echo "cgroup v2"
  echo "memory.max:  $(cat /sys/fs/cgroup/memory.max)"
  echo "memory.high: $(cat /sys/fs/cgroup/memory.high 2>/dev/null)"
  echo "cpu.max:     $(cat /sys/fs/cgroup/cpu.max 2>/dev/null)"
else
  echo "cgroup v1"
  echo "memory.limit_in_bytes: $(cat /sys/fs/cgroup/memory/memory.limit_in_bytes 2>/dev/null)"
  echo "cpu.cfs_quota_us:      $(cat /sys/fs/cgroup/cpu/cpu.cfs_quota_us 2>/dev/null)"
  echo "cpu.cfs_period_us:     $(cat /sys/fs/cgroup/cpu/cpu.cfs_period_us 2>/dev/null)"
fi

echo; echo "===== DISCO ====="
df -h . /tmp 2>/dev/null
echo "Sistema de arquivos da pasta atual: $(df -T . | awk 'NR==2{print $2}')"

echo; echo "===== COMPILADOR ====="
gcc --version | head -n 1
gcc -dumpmachine
ld --version | head -n 1
as --version | head -n 1

echo; echo "===== CARGA ATUAL DA MÁQUINA ====="
uptime
ps -eo pid,comm,%cpu,%mem --sort=-%cpu | head -n 6

if [ -f "$ARQ" ]; then
  echo; echo "===== MEDIÇÃO: $REP rodadas por flag (real s | user s | sys s | pico de RAM KB) ====="
  for FLAG in -O0 -O2; do
    echo "--- gcc $FLAG ---"
    for i in $(seq 1 $REP); do
      /usr/bin/time -f "rodada $i: real=%e user=%U sys=%S maxRSS=%M" \
        gcc $FLAG -c "$ARQ" -o /tmp/teste.o 2>&1 | tail -n 1
    done
  done
  rm -f /tmp/teste.o
fi
} 2>&1 | tee "$OUT"

echo; echo "Salvo em $OUT"
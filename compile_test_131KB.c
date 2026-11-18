#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    unsigned int a;
    unsigned int b;
    unsigned int c;
} Triple;

static unsigned int func_0(unsigned int x)
{
    unsigned int acc = x + 0;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 0u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_1(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_2(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 3u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_3(unsigned int x)
{
    Triple t;
    t.a = x + 3u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1003u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_4(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 7u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 4u;
}

static unsigned int func_5(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_6(unsigned int x)
{
    unsigned int acc = x + 6;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 6u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_7(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 7u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 49u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_8(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 9u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_9(unsigned int x)
{
    Triple t;
    t.a = x + 9u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1009u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_10(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 13u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 10u;
}

static unsigned int func_11(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_12(unsigned int x)
{
    unsigned int acc = x + 12;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 12u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_13(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 13u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 91u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_14(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 15u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_15(unsigned int x)
{
    Triple t;
    t.a = x + 15u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1015u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_16(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 19u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 16u;
}

static unsigned int func_17(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_18(unsigned int x)
{
    unsigned int acc = x + 18;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 18u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_19(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 19u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 133u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_20(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 21u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_21(unsigned int x)
{
    Triple t;
    t.a = x + 21u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1021u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_22(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 25u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 22u;
}

static unsigned int func_23(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_24(unsigned int x)
{
    unsigned int acc = x + 24;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 24u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_25(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 25u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 175u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_26(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 27u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_27(unsigned int x)
{
    Triple t;
    t.a = x + 27u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1027u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_28(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 31u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 28u;
}

static unsigned int func_29(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_30(unsigned int x)
{
    unsigned int acc = x + 30;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 30u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_31(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 31u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 217u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_32(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 33u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_33(unsigned int x)
{
    Triple t;
    t.a = x + 33u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1033u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_34(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 37u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 34u;
}

static unsigned int func_35(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_36(unsigned int x)
{
    unsigned int acc = x + 36;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 36u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_37(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 37u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 259u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_38(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 39u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_39(unsigned int x)
{
    Triple t;
    t.a = x + 39u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1039u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_40(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 43u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 40u;
}

static unsigned int func_41(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_42(unsigned int x)
{
    unsigned int acc = x + 42;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 42u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_43(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 43u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 301u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_44(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 45u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_45(unsigned int x)
{
    Triple t;
    t.a = x + 45u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1045u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_46(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 49u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 46u;
}

static unsigned int func_47(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_48(unsigned int x)
{
    unsigned int acc = x + 48;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 48u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_49(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 49u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 343u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_50(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 51u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_51(unsigned int x)
{
    Triple t;
    t.a = x + 51u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1051u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_52(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 55u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 52u;
}

static unsigned int func_53(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_54(unsigned int x)
{
    unsigned int acc = x + 54;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 54u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_55(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 55u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 385u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_56(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 57u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_57(unsigned int x)
{
    Triple t;
    t.a = x + 57u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1057u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_58(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 61u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 58u;
}

static unsigned int func_59(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_60(unsigned int x)
{
    unsigned int acc = x + 60;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 60u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_61(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 61u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 427u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_62(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 63u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_63(unsigned int x)
{
    Triple t;
    t.a = x + 63u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1063u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_64(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 67u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 64u;
}

static unsigned int func_65(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_66(unsigned int x)
{
    unsigned int acc = x + 66;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 66u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_67(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 67u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 469u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_68(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 69u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_69(unsigned int x)
{
    Triple t;
    t.a = x + 69u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1069u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_70(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 73u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 70u;
}

static unsigned int func_71(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_72(unsigned int x)
{
    unsigned int acc = x + 72;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 72u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_73(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 73u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 511u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_74(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 75u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_75(unsigned int x)
{
    Triple t;
    t.a = x + 75u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1075u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_76(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 79u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 76u;
}

static unsigned int func_77(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_78(unsigned int x)
{
    unsigned int acc = x + 78;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 78u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_79(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 79u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 553u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_80(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 81u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_81(unsigned int x)
{
    Triple t;
    t.a = x + 81u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1081u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_82(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 85u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 82u;
}

static unsigned int func_83(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_84(unsigned int x)
{
    unsigned int acc = x + 84;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 84u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_85(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 85u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 595u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_86(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 87u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_87(unsigned int x)
{
    Triple t;
    t.a = x + 87u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1087u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_88(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 91u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 88u;
}

static unsigned int func_89(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_90(unsigned int x)
{
    unsigned int acc = x + 90;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 90u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_91(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 91u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 637u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_92(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 93u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_93(unsigned int x)
{
    Triple t;
    t.a = x + 93u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1093u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_94(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 97u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 94u;
}

static unsigned int func_95(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_96(unsigned int x)
{
    unsigned int acc = x + 96;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 96u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_97(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 97u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 679u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_98(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 99u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_99(unsigned int x)
{
    Triple t;
    t.a = x + 99u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1099u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_100(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 103u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 100u;
}

static unsigned int func_101(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_102(unsigned int x)
{
    unsigned int acc = x + 102;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 102u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_103(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 103u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 721u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_104(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 105u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_105(unsigned int x)
{
    Triple t;
    t.a = x + 105u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1105u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_106(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 109u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 106u;
}

static unsigned int func_107(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_108(unsigned int x)
{
    unsigned int acc = x + 108;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 108u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_109(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 109u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 763u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_110(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 111u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_111(unsigned int x)
{
    Triple t;
    t.a = x + 111u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1111u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_112(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 115u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 112u;
}

static unsigned int func_113(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_114(unsigned int x)
{
    unsigned int acc = x + 114;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 114u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_115(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 115u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 805u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_116(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 117u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_117(unsigned int x)
{
    Triple t;
    t.a = x + 117u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1117u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_118(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 121u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 118u;
}

static unsigned int func_119(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_120(unsigned int x)
{
    unsigned int acc = x + 120;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 120u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_121(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 121u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 847u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_122(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 123u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_123(unsigned int x)
{
    Triple t;
    t.a = x + 123u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1123u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_124(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 127u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 124u;
}

static unsigned int func_125(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_126(unsigned int x)
{
    unsigned int acc = x + 126;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 126u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_127(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 127u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 889u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_128(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 129u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_129(unsigned int x)
{
    Triple t;
    t.a = x + 129u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1129u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_130(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 133u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 130u;
}

static unsigned int func_131(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_132(unsigned int x)
{
    unsigned int acc = x + 132;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 132u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_133(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 133u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 931u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_134(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 135u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_135(unsigned int x)
{
    Triple t;
    t.a = x + 135u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1135u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_136(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 139u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 136u;
}

static unsigned int func_137(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_138(unsigned int x)
{
    unsigned int acc = x + 138;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 138u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_139(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 139u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 973u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_140(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 141u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_141(unsigned int x)
{
    Triple t;
    t.a = x + 141u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1141u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_142(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 145u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 142u;
}

static unsigned int func_143(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_144(unsigned int x)
{
    unsigned int acc = x + 144;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 144u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_145(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 145u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1015u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_146(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 147u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_147(unsigned int x)
{
    Triple t;
    t.a = x + 147u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1147u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_148(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 151u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 148u;
}

static unsigned int func_149(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_150(unsigned int x)
{
    unsigned int acc = x + 150;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 150u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_151(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 151u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1057u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_152(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 153u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_153(unsigned int x)
{
    Triple t;
    t.a = x + 153u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1153u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_154(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 157u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 154u;
}

static unsigned int func_155(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_156(unsigned int x)
{
    unsigned int acc = x + 156;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 156u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_157(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 157u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1099u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_158(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 159u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_159(unsigned int x)
{
    Triple t;
    t.a = x + 159u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1159u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_160(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 163u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 160u;
}

static unsigned int func_161(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_162(unsigned int x)
{
    unsigned int acc = x + 162;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 162u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_163(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 163u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1141u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_164(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 165u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_165(unsigned int x)
{
    Triple t;
    t.a = x + 165u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1165u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_166(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 169u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 166u;
}

static unsigned int func_167(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_168(unsigned int x)
{
    unsigned int acc = x + 168;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 168u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_169(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 169u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1183u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_170(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 171u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_171(unsigned int x)
{
    Triple t;
    t.a = x + 171u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1171u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_172(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 175u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 172u;
}

static unsigned int func_173(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_174(unsigned int x)
{
    unsigned int acc = x + 174;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 174u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_175(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 175u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1225u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_176(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 177u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_177(unsigned int x)
{
    Triple t;
    t.a = x + 177u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1177u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_178(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 181u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 178u;
}

static unsigned int func_179(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_180(unsigned int x)
{
    unsigned int acc = x + 180;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 180u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_181(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 181u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1267u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_182(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 183u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_183(unsigned int x)
{
    Triple t;
    t.a = x + 183u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1183u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_184(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 187u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 184u;
}

static unsigned int func_185(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_186(unsigned int x)
{
    unsigned int acc = x + 186;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 186u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_187(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 187u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1309u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_188(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 189u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_189(unsigned int x)
{
    Triple t;
    t.a = x + 189u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1189u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_190(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 193u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 190u;
}

static unsigned int func_191(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_192(unsigned int x)
{
    unsigned int acc = x + 192;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 192u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_193(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 193u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1351u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_194(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 195u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_195(unsigned int x)
{
    Triple t;
    t.a = x + 195u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1195u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_196(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 199u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 196u;
}

static unsigned int func_197(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_198(unsigned int x)
{
    unsigned int acc = x + 198;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 198u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_199(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 199u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1393u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_200(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 201u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_201(unsigned int x)
{
    Triple t;
    t.a = x + 201u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1201u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_202(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 205u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 202u;
}

static unsigned int func_203(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_204(unsigned int x)
{
    unsigned int acc = x + 204;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 204u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_205(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 205u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1435u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_206(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 207u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_207(unsigned int x)
{
    Triple t;
    t.a = x + 207u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1207u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_208(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 211u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 208u;
}

static unsigned int func_209(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_210(unsigned int x)
{
    unsigned int acc = x + 210;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 210u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_211(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 211u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1477u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_212(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 213u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_213(unsigned int x)
{
    Triple t;
    t.a = x + 213u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1213u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_214(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 217u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 214u;
}

static unsigned int func_215(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_216(unsigned int x)
{
    unsigned int acc = x + 216;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 216u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_217(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 217u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1519u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_218(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 219u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_219(unsigned int x)
{
    Triple t;
    t.a = x + 219u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1219u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_220(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 223u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 220u;
}

static unsigned int func_221(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_222(unsigned int x)
{
    unsigned int acc = x + 222;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 222u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_223(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 223u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1561u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_224(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 225u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_225(unsigned int x)
{
    Triple t;
    t.a = x + 225u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1225u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_226(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 229u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 226u;
}

static unsigned int func_227(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_228(unsigned int x)
{
    unsigned int acc = x + 228;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 228u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_229(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 229u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1603u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_230(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 231u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_231(unsigned int x)
{
    Triple t;
    t.a = x + 231u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1231u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_232(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 235u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 232u;
}

static unsigned int func_233(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_234(unsigned int x)
{
    unsigned int acc = x + 234;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 234u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_235(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 235u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1645u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_236(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 237u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_237(unsigned int x)
{
    Triple t;
    t.a = x + 237u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1237u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_238(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 241u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 238u;
}

static unsigned int func_239(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_240(unsigned int x)
{
    unsigned int acc = x + 240;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 240u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_241(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 241u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1687u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_242(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 243u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_243(unsigned int x)
{
    Triple t;
    t.a = x + 243u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1243u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_244(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 247u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 244u;
}

static unsigned int func_245(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_246(unsigned int x)
{
    unsigned int acc = x + 246;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 246u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_247(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 247u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1729u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_248(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 249u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_249(unsigned int x)
{
    Triple t;
    t.a = x + 249u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1249u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_250(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 253u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 250u;
}

static unsigned int func_251(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_252(unsigned int x)
{
    unsigned int acc = x + 252;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 252u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_253(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 253u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1771u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_254(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 255u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_255(unsigned int x)
{
    Triple t;
    t.a = x + 255u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1255u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_256(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 259u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 256u;
}

static unsigned int func_257(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_258(unsigned int x)
{
    unsigned int acc = x + 258;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 258u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_259(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 259u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1813u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_260(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 261u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_261(unsigned int x)
{
    Triple t;
    t.a = x + 261u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1261u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_262(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 265u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 262u;
}

static unsigned int func_263(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_264(unsigned int x)
{
    unsigned int acc = x + 264;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 264u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_265(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 265u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1855u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_266(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 267u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_267(unsigned int x)
{
    Triple t;
    t.a = x + 267u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1267u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_268(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 271u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 268u;
}

static unsigned int func_269(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_270(unsigned int x)
{
    unsigned int acc = x + 270;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 270u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_271(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 271u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1897u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_272(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 273u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_273(unsigned int x)
{
    Triple t;
    t.a = x + 273u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1273u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_274(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 277u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 274u;
}

static unsigned int func_275(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_276(unsigned int x)
{
    unsigned int acc = x + 276;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 276u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_277(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 277u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1939u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_278(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 279u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_279(unsigned int x)
{
    Triple t;
    t.a = x + 279u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1279u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_280(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 283u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 280u;
}

static unsigned int func_281(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_282(unsigned int x)
{
    unsigned int acc = x + 282;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 282u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_283(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 283u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 1981u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_284(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 285u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_285(unsigned int x)
{
    Triple t;
    t.a = x + 285u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1285u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_286(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 289u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 286u;
}

static unsigned int func_287(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_288(unsigned int x)
{
    unsigned int acc = x + 288;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 288u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_289(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 289u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2023u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_290(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 291u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_291(unsigned int x)
{
    Triple t;
    t.a = x + 291u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1291u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_292(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 295u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 292u;
}

static unsigned int func_293(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_294(unsigned int x)
{
    unsigned int acc = x + 294;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 294u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_295(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 295u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2065u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_296(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 297u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_297(unsigned int x)
{
    Triple t;
    t.a = x + 297u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1297u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_298(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 301u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 298u;
}

static unsigned int func_299(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_300(unsigned int x)
{
    unsigned int acc = x + 300;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 300u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_301(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 301u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2107u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_302(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 303u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_303(unsigned int x)
{
    Triple t;
    t.a = x + 303u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1303u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_304(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 307u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 304u;
}

static unsigned int func_305(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_306(unsigned int x)
{
    unsigned int acc = x + 306;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 306u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_307(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 307u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2149u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_308(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 309u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_309(unsigned int x)
{
    Triple t;
    t.a = x + 309u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1309u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_310(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 313u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 310u;
}

static unsigned int func_311(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_312(unsigned int x)
{
    unsigned int acc = x + 312;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 312u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_313(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 313u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2191u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_314(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 315u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_315(unsigned int x)
{
    Triple t;
    t.a = x + 315u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1315u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_316(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 319u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 316u;
}

static unsigned int func_317(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_318(unsigned int x)
{
    unsigned int acc = x + 318;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 318u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_319(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 319u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2233u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_320(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 321u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_321(unsigned int x)
{
    Triple t;
    t.a = x + 321u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1321u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_322(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 325u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 322u;
}

static unsigned int func_323(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_324(unsigned int x)
{
    unsigned int acc = x + 324;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 324u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_325(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 325u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2275u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_326(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 327u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_327(unsigned int x)
{
    Triple t;
    t.a = x + 327u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1327u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_328(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 331u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 328u;
}

static unsigned int func_329(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_330(unsigned int x)
{
    unsigned int acc = x + 330;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 330u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_331(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 331u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2317u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_332(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 333u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_333(unsigned int x)
{
    Triple t;
    t.a = x + 333u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1333u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_334(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 337u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 334u;
}

static unsigned int func_335(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_336(unsigned int x)
{
    unsigned int acc = x + 336;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 336u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_337(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 337u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2359u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_338(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 339u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_339(unsigned int x)
{
    Triple t;
    t.a = x + 339u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1339u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_340(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 343u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 340u;
}

static unsigned int func_341(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_342(unsigned int x)
{
    unsigned int acc = x + 342;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 342u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_343(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 343u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2401u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_344(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 345u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_345(unsigned int x)
{
    Triple t;
    t.a = x + 345u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1345u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_346(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 349u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 346u;
}

static unsigned int func_347(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_348(unsigned int x)
{
    unsigned int acc = x + 348;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 348u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_349(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 349u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2443u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_350(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 351u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_351(unsigned int x)
{
    Triple t;
    t.a = x + 351u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1351u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_352(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 355u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 352u;
}

static unsigned int func_353(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_354(unsigned int x)
{
    unsigned int acc = x + 354;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 354u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_355(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 355u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2485u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_356(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 357u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_357(unsigned int x)
{
    Triple t;
    t.a = x + 357u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1357u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_358(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 361u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 358u;
}

static unsigned int func_359(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 3u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_360(unsigned int x)
{
    unsigned int acc = x + 360;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 360u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_361(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 361u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2527u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_362(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 363u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_363(unsigned int x)
{
    Triple t;
    t.a = x + 363u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1363u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_364(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 367u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 364u;
}

static unsigned int func_365(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 2u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_366(unsigned int x)
{
    unsigned int acc = x + 366;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 366u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_367(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 367u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2569u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_368(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 369u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_369(unsigned int x)
{
    Triple t;
    t.a = x + 369u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1369u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_370(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 373u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 370u;
}

static unsigned int func_371(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 2u + q * 1u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_372(unsigned int x)
{
    unsigned int acc = x + 372;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 372u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_373(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 373u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2611u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_374(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 375u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_375(unsigned int x)
{
    Triple t;
    t.a = x + 375u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1375u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_376(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 379u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 376u;
}

static unsigned int func_377(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 3u + q * 7u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_378(unsigned int x)
{
    unsigned int acc = x + 378;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 378u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_379(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 379u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2653u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_380(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 381u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_381(unsigned int x)
{
    Triple t;
    t.a = x + 381u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1381u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_382(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 385u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 382u;
}

static unsigned int func_383(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 4u + q * 6u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_384(unsigned int x)
{
    unsigned int acc = x + 384;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 384u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_385(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 385u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2695u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_386(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 387u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_387(unsigned int x)
{
    Triple t;
    t.a = x + 387u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1387u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_388(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 391u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 388u;
}

static unsigned int func_389(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 5u + q * 5u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_390(unsigned int x)
{
    unsigned int acc = x + 390;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 390u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_391(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 391u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2737u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_392(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 393u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_393(unsigned int x)
{
    Triple t;
    t.a = x + 393u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1393u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_394(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 397u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 394u;
}

static unsigned int func_395(unsigned int x)
{
    unsigned int m[3][3];
    unsigned int p;
    unsigned int q;
    unsigned int tr = 0;
    for (p = 0; p < 3; p++) {
        for (q = 0; q < 3; q++) {
            m[p][q] = x + p * 1u + q * 4u;
        }
    }
    for (p = 0; p < 3; p++) {
        tr += m[p][p] * m[2 - p][p];
    }
    return tr;
}

static unsigned int func_396(unsigned int x)
{
    unsigned int acc = x + 396;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 396u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_397(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 397u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2779u;
        break;
    case 3:
        r = (x << 2) | (x >> 3);
        break;
    default:
        r = x + v;
        break;
    }
    return r;
}

static unsigned int func_398(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 399u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_399(unsigned int x)
{
    Triple t;
    t.a = x + 399u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1399u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

int main(void)
{
    unsigned int total = 1u;
    total += func_0(total);
    total += func_1(total);
    total += func_2(total);
    total += func_3(total);
    total += func_4(total);
    total += func_5(total);
    total += func_6(total);
    total += func_7(total);
    total += func_8(total);
    total += func_9(total);
    total += func_10(total);
    total += func_11(total);
    total += func_12(total);
    total += func_13(total);
    total += func_14(total);
    total += func_15(total);
    total += func_16(total);
    total += func_17(total);
    total += func_18(total);
    total += func_19(total);
    total += func_20(total);
    total += func_21(total);
    total += func_22(total);
    total += func_23(total);
    total += func_24(total);
    total += func_25(total);
    total += func_26(total);
    total += func_27(total);
    total += func_28(total);
    total += func_29(total);
    total += func_30(total);
    total += func_31(total);
    total += func_32(total);
    total += func_33(total);
    total += func_34(total);
    total += func_35(total);
    total += func_36(total);
    total += func_37(total);
    total += func_38(total);
    total += func_39(total);
    total += func_40(total);
    total += func_41(total);
    total += func_42(total);
    total += func_43(total);
    total += func_44(total);
    total += func_45(total);
    total += func_46(total);
    total += func_47(total);
    total += func_48(total);
    total += func_49(total);
    total += func_50(total);
    total += func_51(total);
    total += func_52(total);
    total += func_53(total);
    total += func_54(total);
    total += func_55(total);
    total += func_56(total);
    total += func_57(total);
    total += func_58(total);
    total += func_59(total);
    total += func_60(total);
    total += func_61(total);
    total += func_62(total);
    total += func_63(total);
    total += func_64(total);
    total += func_65(total);
    total += func_66(total);
    total += func_67(total);
    total += func_68(total);
    total += func_69(total);
    total += func_70(total);
    total += func_71(total);
    total += func_72(total);
    total += func_73(total);
    total += func_74(total);
    total += func_75(total);
    total += func_76(total);
    total += func_77(total);
    total += func_78(total);
    total += func_79(total);
    total += func_80(total);
    total += func_81(total);
    total += func_82(total);
    total += func_83(total);
    total += func_84(total);
    total += func_85(total);
    total += func_86(total);
    total += func_87(total);
    total += func_88(total);
    total += func_89(total);
    total += func_90(total);
    total += func_91(total);
    total += func_92(total);
    total += func_93(total);
    total += func_94(total);
    total += func_95(total);
    total += func_96(total);
    total += func_97(total);
    total += func_98(total);
    total += func_99(total);
    total += func_100(total);
    total += func_101(total);
    total += func_102(total);
    total += func_103(total);
    total += func_104(total);
    total += func_105(total);
    total += func_106(total);
    total += func_107(total);
    total += func_108(total);
    total += func_109(total);
    total += func_110(total);
    total += func_111(total);
    total += func_112(total);
    total += func_113(total);
    total += func_114(total);
    total += func_115(total);
    total += func_116(total);
    total += func_117(total);
    total += func_118(total);
    total += func_119(total);
    total += func_120(total);
    total += func_121(total);
    total += func_122(total);
    total += func_123(total);
    total += func_124(total);
    total += func_125(total);
    total += func_126(total);
    total += func_127(total);
    total += func_128(total);
    total += func_129(total);
    total += func_130(total);
    total += func_131(total);
    total += func_132(total);
    total += func_133(total);
    total += func_134(total);
    total += func_135(total);
    total += func_136(total);
    total += func_137(total);
    total += func_138(total);
    total += func_139(total);
    total += func_140(total);
    total += func_141(total);
    total += func_142(total);
    total += func_143(total);
    total += func_144(total);
    total += func_145(total);
    total += func_146(total);
    total += func_147(total);
    total += func_148(total);
    total += func_149(total);
    total += func_150(total);
    total += func_151(total);
    total += func_152(total);
    total += func_153(total);
    total += func_154(total);
    total += func_155(total);
    total += func_156(total);
    total += func_157(total);
    total += func_158(total);
    total += func_159(total);
    total += func_160(total);
    total += func_161(total);
    total += func_162(total);
    total += func_163(total);
    total += func_164(total);
    total += func_165(total);
    total += func_166(total);
    total += func_167(total);
    total += func_168(total);
    total += func_169(total);
    total += func_170(total);
    total += func_171(total);
    total += func_172(total);
    total += func_173(total);
    total += func_174(total);
    total += func_175(total);
    total += func_176(total);
    total += func_177(total);
    total += func_178(total);
    total += func_179(total);
    total += func_180(total);
    total += func_181(total);
    total += func_182(total);
    total += func_183(total);
    total += func_184(total);
    total += func_185(total);
    total += func_186(total);
    total += func_187(total);
    total += func_188(total);
    total += func_189(total);
    total += func_190(total);
    total += func_191(total);
    total += func_192(total);
    total += func_193(total);
    total += func_194(total);
    total += func_195(total);
    total += func_196(total);
    total += func_197(total);
    total += func_198(total);
    total += func_199(total);
    total += func_200(total);
    total += func_201(total);
    total += func_202(total);
    total += func_203(total);
    total += func_204(total);
    total += func_205(total);
    total += func_206(total);
    total += func_207(total);
    total += func_208(total);
    total += func_209(total);
    total += func_210(total);
    total += func_211(total);
    total += func_212(total);
    total += func_213(total);
    total += func_214(total);
    total += func_215(total);
    total += func_216(total);
    total += func_217(total);
    total += func_218(total);
    total += func_219(total);
    total += func_220(total);
    total += func_221(total);
    total += func_222(total);
    total += func_223(total);
    total += func_224(total);
    total += func_225(total);
    total += func_226(total);
    total += func_227(total);
    total += func_228(total);
    total += func_229(total);
    total += func_230(total);
    total += func_231(total);
    total += func_232(total);
    total += func_233(total);
    total += func_234(total);
    total += func_235(total);
    total += func_236(total);
    total += func_237(total);
    total += func_238(total);
    total += func_239(total);
    total += func_240(total);
    total += func_241(total);
    total += func_242(total);
    total += func_243(total);
    total += func_244(total);
    total += func_245(total);
    total += func_246(total);
    total += func_247(total);
    total += func_248(total);
    total += func_249(total);
    total += func_250(total);
    total += func_251(total);
    total += func_252(total);
    total += func_253(total);
    total += func_254(total);
    total += func_255(total);
    total += func_256(total);
    total += func_257(total);
    total += func_258(total);
    total += func_259(total);
    total += func_260(total);
    total += func_261(total);
    total += func_262(total);
    total += func_263(total);
    total += func_264(total);
    total += func_265(total);
    total += func_266(total);
    total += func_267(total);
    total += func_268(total);
    total += func_269(total);
    total += func_270(total);
    total += func_271(total);
    total += func_272(total);
    total += func_273(total);
    total += func_274(total);
    total += func_275(total);
    total += func_276(total);
    total += func_277(total);
    total += func_278(total);
    total += func_279(total);
    total += func_280(total);
    total += func_281(total);
    total += func_282(total);
    total += func_283(total);
    total += func_284(total);
    total += func_285(total);
    total += func_286(total);
    total += func_287(total);
    total += func_288(total);
    total += func_289(total);
    total += func_290(total);
    total += func_291(total);
    total += func_292(total);
    total += func_293(total);
    total += func_294(total);
    total += func_295(total);
    total += func_296(total);
    total += func_297(total);
    total += func_298(total);
    total += func_299(total);
    total += func_300(total);
    total += func_301(total);
    total += func_302(total);
    total += func_303(total);
    total += func_304(total);
    total += func_305(total);
    total += func_306(total);
    total += func_307(total);
    total += func_308(total);
    total += func_309(total);
    total += func_310(total);
    total += func_311(total);
    total += func_312(total);
    total += func_313(total);
    total += func_314(total);
    total += func_315(total);
    total += func_316(total);
    total += func_317(total);
    total += func_318(total);
    total += func_319(total);
    total += func_320(total);
    total += func_321(total);
    total += func_322(total);
    total += func_323(total);
    total += func_324(total);
    total += func_325(total);
    total += func_326(total);
    total += func_327(total);
    total += func_328(total);
    total += func_329(total);
    total += func_330(total);
    total += func_331(total);
    total += func_332(total);
    total += func_333(total);
    total += func_334(total);
    total += func_335(total);
    total += func_336(total);
    total += func_337(total);
    total += func_338(total);
    total += func_339(total);
    total += func_340(total);
    total += func_341(total);
    total += func_342(total);
    total += func_343(total);
    total += func_344(total);
    total += func_345(total);
    total += func_346(total);
    total += func_347(total);
    total += func_348(total);
    total += func_349(total);
    total += func_350(total);
    total += func_351(total);
    total += func_352(total);
    total += func_353(total);
    total += func_354(total);
    total += func_355(total);
    total += func_356(total);
    total += func_357(total);
    total += func_358(total);
    total += func_359(total);
    total += func_360(total);
    total += func_361(total);
    total += func_362(total);
    total += func_363(total);
    total += func_364(total);
    total += func_365(total);
    total += func_366(total);
    total += func_367(total);
    total += func_368(total);
    total += func_369(total);
    total += func_370(total);
    total += func_371(total);
    total += func_372(total);
    total += func_373(total);
    total += func_374(total);
    total += func_375(total);
    total += func_376(total);
    total += func_377(total);
    total += func_378(total);
    total += func_379(total);
    total += func_380(total);
    total += func_381(total);
    total += func_382(total);
    total += func_383(total);
    total += func_384(total);
    total += func_385(total);
    total += func_386(total);
    total += func_387(total);
    total += func_388(total);
    total += func_389(total);
    total += func_390(total);
    total += func_391(total);
    total += func_392(total);
    total += func_393(total);
    total += func_394(total);
    total += func_395(total);
    total += func_396(total);
    total += func_397(total);
    total += func_398(total);
    total += func_399(total);
    printf("%u\n", total);
    return 0;
}

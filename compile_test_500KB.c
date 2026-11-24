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

static unsigned int func_400(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 403u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 400u;
}

static unsigned int func_401(unsigned int x)
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

static unsigned int func_402(unsigned int x)
{
    unsigned int acc = x + 402;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 402u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_403(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 403u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2821u;
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

static unsigned int func_404(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 405u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_405(unsigned int x)
{
    Triple t;
    t.a = x + 405u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1405u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_406(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 409u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 406u;
}

static unsigned int func_407(unsigned int x)
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

static unsigned int func_408(unsigned int x)
{
    unsigned int acc = x + 408;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 408u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_409(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 409u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2863u;
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

static unsigned int func_410(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 411u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_411(unsigned int x)
{
    Triple t;
    t.a = x + 411u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1411u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_412(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 415u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 412u;
}

static unsigned int func_413(unsigned int x)
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

static unsigned int func_414(unsigned int x)
{
    unsigned int acc = x + 414;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 414u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_415(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 415u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2905u;
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

static unsigned int func_416(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 417u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_417(unsigned int x)
{
    Triple t;
    t.a = x + 417u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1417u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_418(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 421u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 418u;
}

static unsigned int func_419(unsigned int x)
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

static unsigned int func_420(unsigned int x)
{
    unsigned int acc = x + 420;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 420u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_421(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 421u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2947u;
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

static unsigned int func_422(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 423u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_423(unsigned int x)
{
    Triple t;
    t.a = x + 423u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1423u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_424(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 427u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 424u;
}

static unsigned int func_425(unsigned int x)
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

static unsigned int func_426(unsigned int x)
{
    unsigned int acc = x + 426;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 426u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_427(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 427u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 2989u;
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

static unsigned int func_428(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 429u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_429(unsigned int x)
{
    Triple t;
    t.a = x + 429u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1429u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_430(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 433u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 430u;
}

static unsigned int func_431(unsigned int x)
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

static unsigned int func_432(unsigned int x)
{
    unsigned int acc = x + 432;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 432u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_433(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 433u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3031u;
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

static unsigned int func_434(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 435u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_435(unsigned int x)
{
    Triple t;
    t.a = x + 435u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1435u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_436(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 439u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 436u;
}

static unsigned int func_437(unsigned int x)
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

static unsigned int func_438(unsigned int x)
{
    unsigned int acc = x + 438;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 438u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_439(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 439u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3073u;
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

static unsigned int func_440(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 441u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_441(unsigned int x)
{
    Triple t;
    t.a = x + 441u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1441u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_442(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 445u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 442u;
}

static unsigned int func_443(unsigned int x)
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

static unsigned int func_444(unsigned int x)
{
    unsigned int acc = x + 444;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 444u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_445(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 445u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3115u;
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

static unsigned int func_446(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 447u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_447(unsigned int x)
{
    Triple t;
    t.a = x + 447u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1447u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_448(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 451u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 448u;
}

static unsigned int func_449(unsigned int x)
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

static unsigned int func_450(unsigned int x)
{
    unsigned int acc = x + 450;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 450u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_451(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 451u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3157u;
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

static unsigned int func_452(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 453u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_453(unsigned int x)
{
    Triple t;
    t.a = x + 453u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1453u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_454(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 457u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 454u;
}

static unsigned int func_455(unsigned int x)
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

static unsigned int func_456(unsigned int x)
{
    unsigned int acc = x + 456;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 456u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_457(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 457u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3199u;
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

static unsigned int func_458(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 459u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_459(unsigned int x)
{
    Triple t;
    t.a = x + 459u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1459u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_460(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 463u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 460u;
}

static unsigned int func_461(unsigned int x)
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

static unsigned int func_462(unsigned int x)
{
    unsigned int acc = x + 462;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 462u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_463(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 463u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3241u;
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

static unsigned int func_464(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 465u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_465(unsigned int x)
{
    Triple t;
    t.a = x + 465u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1465u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_466(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 469u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 466u;
}

static unsigned int func_467(unsigned int x)
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

static unsigned int func_468(unsigned int x)
{
    unsigned int acc = x + 468;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 468u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_469(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 469u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3283u;
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

static unsigned int func_470(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 471u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_471(unsigned int x)
{
    Triple t;
    t.a = x + 471u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1471u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_472(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 475u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 472u;
}

static unsigned int func_473(unsigned int x)
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

static unsigned int func_474(unsigned int x)
{
    unsigned int acc = x + 474;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 474u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_475(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 475u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3325u;
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

static unsigned int func_476(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 477u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_477(unsigned int x)
{
    Triple t;
    t.a = x + 477u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1477u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_478(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 481u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 478u;
}

static unsigned int func_479(unsigned int x)
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

static unsigned int func_480(unsigned int x)
{
    unsigned int acc = x + 480;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 480u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_481(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 481u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3367u;
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

static unsigned int func_482(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 483u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_483(unsigned int x)
{
    Triple t;
    t.a = x + 483u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1483u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_484(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 487u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 484u;
}

static unsigned int func_485(unsigned int x)
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

static unsigned int func_486(unsigned int x)
{
    unsigned int acc = x + 486;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 486u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_487(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 487u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3409u;
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

static unsigned int func_488(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 489u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_489(unsigned int x)
{
    Triple t;
    t.a = x + 489u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1489u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_490(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 493u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 490u;
}

static unsigned int func_491(unsigned int x)
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

static unsigned int func_492(unsigned int x)
{
    unsigned int acc = x + 492;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 492u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_493(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 493u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3451u;
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

static unsigned int func_494(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 495u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_495(unsigned int x)
{
    Triple t;
    t.a = x + 495u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1495u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_496(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 499u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 496u;
}

static unsigned int func_497(unsigned int x)
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

static unsigned int func_498(unsigned int x)
{
    unsigned int acc = x + 498;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 498u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_499(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 499u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3493u;
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

static unsigned int func_500(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 501u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_501(unsigned int x)
{
    Triple t;
    t.a = x + 501u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1501u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_502(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 505u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 502u;
}

static unsigned int func_503(unsigned int x)
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

static unsigned int func_504(unsigned int x)
{
    unsigned int acc = x + 504;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 504u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_505(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 505u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3535u;
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

static unsigned int func_506(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 507u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_507(unsigned int x)
{
    Triple t;
    t.a = x + 507u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1507u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_508(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 511u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 508u;
}

static unsigned int func_509(unsigned int x)
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

static unsigned int func_510(unsigned int x)
{
    unsigned int acc = x + 510;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 510u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_511(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 511u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3577u;
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

static unsigned int func_512(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 513u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_513(unsigned int x)
{
    Triple t;
    t.a = x + 513u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1513u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_514(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 517u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 514u;
}

static unsigned int func_515(unsigned int x)
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

static unsigned int func_516(unsigned int x)
{
    unsigned int acc = x + 516;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 516u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_517(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 517u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3619u;
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

static unsigned int func_518(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 519u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_519(unsigned int x)
{
    Triple t;
    t.a = x + 519u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1519u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_520(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 523u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 520u;
}

static unsigned int func_521(unsigned int x)
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

static unsigned int func_522(unsigned int x)
{
    unsigned int acc = x + 522;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 522u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_523(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 523u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3661u;
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

static unsigned int func_524(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 525u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_525(unsigned int x)
{
    Triple t;
    t.a = x + 525u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1525u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_526(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 529u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 526u;
}

static unsigned int func_527(unsigned int x)
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

static unsigned int func_528(unsigned int x)
{
    unsigned int acc = x + 528;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 528u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_529(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 529u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3703u;
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

static unsigned int func_530(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 531u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_531(unsigned int x)
{
    Triple t;
    t.a = x + 531u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1531u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_532(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 535u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 532u;
}

static unsigned int func_533(unsigned int x)
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

static unsigned int func_534(unsigned int x)
{
    unsigned int acc = x + 534;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 534u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_535(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 535u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3745u;
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

static unsigned int func_536(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 537u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_537(unsigned int x)
{
    Triple t;
    t.a = x + 537u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1537u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_538(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 541u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 538u;
}

static unsigned int func_539(unsigned int x)
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

static unsigned int func_540(unsigned int x)
{
    unsigned int acc = x + 540;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 540u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_541(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 541u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3787u;
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

static unsigned int func_542(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 543u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_543(unsigned int x)
{
    Triple t;
    t.a = x + 543u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1543u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_544(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 547u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 544u;
}

static unsigned int func_545(unsigned int x)
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

static unsigned int func_546(unsigned int x)
{
    unsigned int acc = x + 546;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 546u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_547(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 547u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3829u;
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

static unsigned int func_548(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 549u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_549(unsigned int x)
{
    Triple t;
    t.a = x + 549u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1549u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_550(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 553u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 550u;
}

static unsigned int func_551(unsigned int x)
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

static unsigned int func_552(unsigned int x)
{
    unsigned int acc = x + 552;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 552u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_553(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 553u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3871u;
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

static unsigned int func_554(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 555u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_555(unsigned int x)
{
    Triple t;
    t.a = x + 555u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1555u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_556(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 559u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 556u;
}

static unsigned int func_557(unsigned int x)
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

static unsigned int func_558(unsigned int x)
{
    unsigned int acc = x + 558;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 558u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_559(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 559u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3913u;
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

static unsigned int func_560(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 561u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_561(unsigned int x)
{
    Triple t;
    t.a = x + 561u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1561u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_562(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 565u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 562u;
}

static unsigned int func_563(unsigned int x)
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

static unsigned int func_564(unsigned int x)
{
    unsigned int acc = x + 564;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 564u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_565(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 565u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3955u;
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

static unsigned int func_566(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 567u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_567(unsigned int x)
{
    Triple t;
    t.a = x + 567u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1567u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_568(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 571u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 568u;
}

static unsigned int func_569(unsigned int x)
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

static unsigned int func_570(unsigned int x)
{
    unsigned int acc = x + 570;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 570u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_571(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 571u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 3997u;
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

static unsigned int func_572(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 573u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_573(unsigned int x)
{
    Triple t;
    t.a = x + 573u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1573u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_574(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 577u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 574u;
}

static unsigned int func_575(unsigned int x)
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

static unsigned int func_576(unsigned int x)
{
    unsigned int acc = x + 576;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 576u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_577(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 577u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4039u;
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

static unsigned int func_578(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 579u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_579(unsigned int x)
{
    Triple t;
    t.a = x + 579u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1579u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_580(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 583u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 580u;
}

static unsigned int func_581(unsigned int x)
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

static unsigned int func_582(unsigned int x)
{
    unsigned int acc = x + 582;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 582u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_583(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 583u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4081u;
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

static unsigned int func_584(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 585u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_585(unsigned int x)
{
    Triple t;
    t.a = x + 585u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1585u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_586(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 589u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 586u;
}

static unsigned int func_587(unsigned int x)
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

static unsigned int func_588(unsigned int x)
{
    unsigned int acc = x + 588;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 588u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_589(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 589u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4123u;
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

static unsigned int func_590(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 591u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_591(unsigned int x)
{
    Triple t;
    t.a = x + 591u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1591u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_592(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 595u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 592u;
}

static unsigned int func_593(unsigned int x)
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

static unsigned int func_594(unsigned int x)
{
    unsigned int acc = x + 594;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 594u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_595(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 595u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4165u;
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

static unsigned int func_596(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 597u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_597(unsigned int x)
{
    Triple t;
    t.a = x + 597u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1597u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_598(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 601u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 598u;
}

static unsigned int func_599(unsigned int x)
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

static unsigned int func_600(unsigned int x)
{
    unsigned int acc = x + 600;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 600u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_601(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 601u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4207u;
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

static unsigned int func_602(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 603u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_603(unsigned int x)
{
    Triple t;
    t.a = x + 603u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1603u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_604(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 607u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 604u;
}

static unsigned int func_605(unsigned int x)
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

static unsigned int func_606(unsigned int x)
{
    unsigned int acc = x + 606;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 606u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_607(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 607u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4249u;
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

static unsigned int func_608(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 609u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_609(unsigned int x)
{
    Triple t;
    t.a = x + 609u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1609u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_610(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 613u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 610u;
}

static unsigned int func_611(unsigned int x)
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

static unsigned int func_612(unsigned int x)
{
    unsigned int acc = x + 612;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 612u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_613(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 613u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4291u;
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

static unsigned int func_614(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 615u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_615(unsigned int x)
{
    Triple t;
    t.a = x + 615u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1615u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_616(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 619u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 616u;
}

static unsigned int func_617(unsigned int x)
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

static unsigned int func_618(unsigned int x)
{
    unsigned int acc = x + 618;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 618u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_619(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 619u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4333u;
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

static unsigned int func_620(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 621u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_621(unsigned int x)
{
    Triple t;
    t.a = x + 621u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1621u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_622(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 625u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 622u;
}

static unsigned int func_623(unsigned int x)
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

static unsigned int func_624(unsigned int x)
{
    unsigned int acc = x + 624;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 624u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_625(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 625u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4375u;
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

static unsigned int func_626(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 627u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_627(unsigned int x)
{
    Triple t;
    t.a = x + 627u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1627u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_628(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 631u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 628u;
}

static unsigned int func_629(unsigned int x)
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

static unsigned int func_630(unsigned int x)
{
    unsigned int acc = x + 630;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 630u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_631(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 631u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4417u;
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

static unsigned int func_632(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 633u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_633(unsigned int x)
{
    Triple t;
    t.a = x + 633u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1633u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_634(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 637u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 634u;
}

static unsigned int func_635(unsigned int x)
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

static unsigned int func_636(unsigned int x)
{
    unsigned int acc = x + 636;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 636u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_637(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 637u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4459u;
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

static unsigned int func_638(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 639u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_639(unsigned int x)
{
    Triple t;
    t.a = x + 639u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1639u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_640(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 643u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 640u;
}

static unsigned int func_641(unsigned int x)
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

static unsigned int func_642(unsigned int x)
{
    unsigned int acc = x + 642;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 642u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_643(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 643u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4501u;
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

static unsigned int func_644(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 645u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_645(unsigned int x)
{
    Triple t;
    t.a = x + 645u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1645u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_646(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 649u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 646u;
}

static unsigned int func_647(unsigned int x)
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

static unsigned int func_648(unsigned int x)
{
    unsigned int acc = x + 648;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 648u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_649(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 649u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4543u;
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

static unsigned int func_650(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 651u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_651(unsigned int x)
{
    Triple t;
    t.a = x + 651u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1651u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_652(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 655u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 652u;
}

static unsigned int func_653(unsigned int x)
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

static unsigned int func_654(unsigned int x)
{
    unsigned int acc = x + 654;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 654u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_655(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 655u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4585u;
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

static unsigned int func_656(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 657u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_657(unsigned int x)
{
    Triple t;
    t.a = x + 657u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1657u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_658(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 661u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 658u;
}

static unsigned int func_659(unsigned int x)
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

static unsigned int func_660(unsigned int x)
{
    unsigned int acc = x + 660;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 660u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_661(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 661u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4627u;
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

static unsigned int func_662(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 663u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_663(unsigned int x)
{
    Triple t;
    t.a = x + 663u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1663u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_664(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 667u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 664u;
}

static unsigned int func_665(unsigned int x)
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

static unsigned int func_666(unsigned int x)
{
    unsigned int acc = x + 666;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 666u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_667(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 667u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4669u;
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

static unsigned int func_668(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 669u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_669(unsigned int x)
{
    Triple t;
    t.a = x + 669u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1669u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_670(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 673u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 670u;
}

static unsigned int func_671(unsigned int x)
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

static unsigned int func_672(unsigned int x)
{
    unsigned int acc = x + 672;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 672u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_673(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 673u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4711u;
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

static unsigned int func_674(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 675u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_675(unsigned int x)
{
    Triple t;
    t.a = x + 675u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1675u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_676(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 679u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 676u;
}

static unsigned int func_677(unsigned int x)
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

static unsigned int func_678(unsigned int x)
{
    unsigned int acc = x + 678;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 678u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_679(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 679u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4753u;
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

static unsigned int func_680(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 681u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_681(unsigned int x)
{
    Triple t;
    t.a = x + 681u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1681u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_682(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 685u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 682u;
}

static unsigned int func_683(unsigned int x)
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

static unsigned int func_684(unsigned int x)
{
    unsigned int acc = x + 684;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 684u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_685(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 685u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4795u;
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

static unsigned int func_686(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 687u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_687(unsigned int x)
{
    Triple t;
    t.a = x + 687u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1687u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_688(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 691u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 688u;
}

static unsigned int func_689(unsigned int x)
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

static unsigned int func_690(unsigned int x)
{
    unsigned int acc = x + 690;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 690u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_691(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 691u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4837u;
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

static unsigned int func_692(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 693u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_693(unsigned int x)
{
    Triple t;
    t.a = x + 693u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1693u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_694(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 697u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 694u;
}

static unsigned int func_695(unsigned int x)
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

static unsigned int func_696(unsigned int x)
{
    unsigned int acc = x + 696;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 696u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_697(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 697u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4879u;
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

static unsigned int func_698(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 699u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_699(unsigned int x)
{
    Triple t;
    t.a = x + 699u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1699u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_700(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 703u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 700u;
}

static unsigned int func_701(unsigned int x)
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

static unsigned int func_702(unsigned int x)
{
    unsigned int acc = x + 702;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 702u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_703(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 703u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4921u;
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

static unsigned int func_704(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 705u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_705(unsigned int x)
{
    Triple t;
    t.a = x + 705u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1705u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_706(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 709u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 706u;
}

static unsigned int func_707(unsigned int x)
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

static unsigned int func_708(unsigned int x)
{
    unsigned int acc = x + 708;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 708u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_709(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 709u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 4963u;
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

static unsigned int func_710(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 711u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_711(unsigned int x)
{
    Triple t;
    t.a = x + 711u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1711u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_712(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 715u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 712u;
}

static unsigned int func_713(unsigned int x)
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

static unsigned int func_714(unsigned int x)
{
    unsigned int acc = x + 714;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 714u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_715(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 715u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5005u;
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

static unsigned int func_716(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 717u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_717(unsigned int x)
{
    Triple t;
    t.a = x + 717u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1717u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_718(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 721u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 718u;
}

static unsigned int func_719(unsigned int x)
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

static unsigned int func_720(unsigned int x)
{
    unsigned int acc = x + 720;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 720u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_721(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 721u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5047u;
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

static unsigned int func_722(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 723u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_723(unsigned int x)
{
    Triple t;
    t.a = x + 723u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1723u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_724(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 727u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 724u;
}

static unsigned int func_725(unsigned int x)
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

static unsigned int func_726(unsigned int x)
{
    unsigned int acc = x + 726;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 726u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_727(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 727u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5089u;
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

static unsigned int func_728(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 729u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_729(unsigned int x)
{
    Triple t;
    t.a = x + 729u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1729u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_730(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 733u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 730u;
}

static unsigned int func_731(unsigned int x)
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

static unsigned int func_732(unsigned int x)
{
    unsigned int acc = x + 732;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 732u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_733(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 733u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5131u;
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

static unsigned int func_734(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 735u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_735(unsigned int x)
{
    Triple t;
    t.a = x + 735u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1735u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_736(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 739u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 736u;
}

static unsigned int func_737(unsigned int x)
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

static unsigned int func_738(unsigned int x)
{
    unsigned int acc = x + 738;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 738u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_739(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 739u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5173u;
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

static unsigned int func_740(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 741u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_741(unsigned int x)
{
    Triple t;
    t.a = x + 741u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1741u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_742(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 745u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 742u;
}

static unsigned int func_743(unsigned int x)
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

static unsigned int func_744(unsigned int x)
{
    unsigned int acc = x + 744;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 744u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_745(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 745u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5215u;
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

static unsigned int func_746(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 747u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_747(unsigned int x)
{
    Triple t;
    t.a = x + 747u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1747u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_748(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 751u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 748u;
}

static unsigned int func_749(unsigned int x)
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

static unsigned int func_750(unsigned int x)
{
    unsigned int acc = x + 750;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 750u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_751(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 751u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5257u;
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

static unsigned int func_752(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 753u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_753(unsigned int x)
{
    Triple t;
    t.a = x + 753u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1753u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_754(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 757u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 754u;
}

static unsigned int func_755(unsigned int x)
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

static unsigned int func_756(unsigned int x)
{
    unsigned int acc = x + 756;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 756u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_757(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 757u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5299u;
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

static unsigned int func_758(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 759u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_759(unsigned int x)
{
    Triple t;
    t.a = x + 759u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1759u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_760(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 763u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 760u;
}

static unsigned int func_761(unsigned int x)
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

static unsigned int func_762(unsigned int x)
{
    unsigned int acc = x + 762;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 762u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_763(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 763u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5341u;
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

static unsigned int func_764(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 765u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_765(unsigned int x)
{
    Triple t;
    t.a = x + 765u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1765u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_766(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 769u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 766u;
}

static unsigned int func_767(unsigned int x)
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

static unsigned int func_768(unsigned int x)
{
    unsigned int acc = x + 768;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 768u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_769(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 769u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5383u;
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

static unsigned int func_770(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 771u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_771(unsigned int x)
{
    Triple t;
    t.a = x + 771u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1771u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_772(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 775u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 772u;
}

static unsigned int func_773(unsigned int x)
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

static unsigned int func_774(unsigned int x)
{
    unsigned int acc = x + 774;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 774u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_775(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 775u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5425u;
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

static unsigned int func_776(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 777u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_777(unsigned int x)
{
    Triple t;
    t.a = x + 777u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1777u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_778(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 781u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 778u;
}

static unsigned int func_779(unsigned int x)
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

static unsigned int func_780(unsigned int x)
{
    unsigned int acc = x + 780;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 780u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_781(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 781u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5467u;
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

static unsigned int func_782(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 783u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_783(unsigned int x)
{
    Triple t;
    t.a = x + 783u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1783u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_784(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 787u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 784u;
}

static unsigned int func_785(unsigned int x)
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

static unsigned int func_786(unsigned int x)
{
    unsigned int acc = x + 786;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 786u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_787(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 787u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5509u;
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

static unsigned int func_788(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 789u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_789(unsigned int x)
{
    Triple t;
    t.a = x + 789u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1789u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_790(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 793u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 790u;
}

static unsigned int func_791(unsigned int x)
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

static unsigned int func_792(unsigned int x)
{
    unsigned int acc = x + 792;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 792u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_793(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 793u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5551u;
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

static unsigned int func_794(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 795u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_795(unsigned int x)
{
    Triple t;
    t.a = x + 795u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1795u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_796(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 799u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 796u;
}

static unsigned int func_797(unsigned int x)
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

static unsigned int func_798(unsigned int x)
{
    unsigned int acc = x + 798;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 798u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_799(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 799u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5593u;
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

static unsigned int func_800(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 801u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_801(unsigned int x)
{
    Triple t;
    t.a = x + 801u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1801u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_802(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 805u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 802u;
}

static unsigned int func_803(unsigned int x)
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

static unsigned int func_804(unsigned int x)
{
    unsigned int acc = x + 804;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 804u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_805(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 805u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5635u;
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

static unsigned int func_806(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 807u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_807(unsigned int x)
{
    Triple t;
    t.a = x + 807u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1807u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_808(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 811u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 808u;
}

static unsigned int func_809(unsigned int x)
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

static unsigned int func_810(unsigned int x)
{
    unsigned int acc = x + 810;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 810u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_811(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 811u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5677u;
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

static unsigned int func_812(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 813u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_813(unsigned int x)
{
    Triple t;
    t.a = x + 813u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1813u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_814(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 817u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 814u;
}

static unsigned int func_815(unsigned int x)
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

static unsigned int func_816(unsigned int x)
{
    unsigned int acc = x + 816;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 816u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_817(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 817u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5719u;
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

static unsigned int func_818(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 819u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_819(unsigned int x)
{
    Triple t;
    t.a = x + 819u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1819u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_820(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 823u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 820u;
}

static unsigned int func_821(unsigned int x)
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

static unsigned int func_822(unsigned int x)
{
    unsigned int acc = x + 822;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 822u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_823(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 823u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5761u;
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

static unsigned int func_824(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 825u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_825(unsigned int x)
{
    Triple t;
    t.a = x + 825u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1825u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_826(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 829u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 826u;
}

static unsigned int func_827(unsigned int x)
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

static unsigned int func_828(unsigned int x)
{
    unsigned int acc = x + 828;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 828u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_829(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 829u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5803u;
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

static unsigned int func_830(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 831u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_831(unsigned int x)
{
    Triple t;
    t.a = x + 831u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1831u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_832(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 835u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 832u;
}

static unsigned int func_833(unsigned int x)
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

static unsigned int func_834(unsigned int x)
{
    unsigned int acc = x + 834;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 834u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_835(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 835u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5845u;
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

static unsigned int func_836(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 837u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_837(unsigned int x)
{
    Triple t;
    t.a = x + 837u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1837u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_838(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 841u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 838u;
}

static unsigned int func_839(unsigned int x)
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

static unsigned int func_840(unsigned int x)
{
    unsigned int acc = x + 840;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 840u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_841(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 841u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5887u;
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

static unsigned int func_842(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 843u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_843(unsigned int x)
{
    Triple t;
    t.a = x + 843u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1843u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_844(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 847u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 844u;
}

static unsigned int func_845(unsigned int x)
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

static unsigned int func_846(unsigned int x)
{
    unsigned int acc = x + 846;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 846u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_847(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 847u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5929u;
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

static unsigned int func_848(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 849u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_849(unsigned int x)
{
    Triple t;
    t.a = x + 849u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1849u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_850(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 853u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 850u;
}

static unsigned int func_851(unsigned int x)
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

static unsigned int func_852(unsigned int x)
{
    unsigned int acc = x + 852;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 852u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_853(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 853u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 5971u;
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

static unsigned int func_854(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 855u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_855(unsigned int x)
{
    Triple t;
    t.a = x + 855u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1855u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_856(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 859u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 856u;
}

static unsigned int func_857(unsigned int x)
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

static unsigned int func_858(unsigned int x)
{
    unsigned int acc = x + 858;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 858u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_859(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 859u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6013u;
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

static unsigned int func_860(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 861u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_861(unsigned int x)
{
    Triple t;
    t.a = x + 861u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1861u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_862(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 865u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 862u;
}

static unsigned int func_863(unsigned int x)
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

static unsigned int func_864(unsigned int x)
{
    unsigned int acc = x + 864;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 864u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_865(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 865u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6055u;
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

static unsigned int func_866(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 867u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_867(unsigned int x)
{
    Triple t;
    t.a = x + 867u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1867u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_868(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 871u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 868u;
}

static unsigned int func_869(unsigned int x)
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

static unsigned int func_870(unsigned int x)
{
    unsigned int acc = x + 870;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 870u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_871(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 871u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6097u;
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

static unsigned int func_872(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 873u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_873(unsigned int x)
{
    Triple t;
    t.a = x + 873u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1873u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_874(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 877u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 874u;
}

static unsigned int func_875(unsigned int x)
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

static unsigned int func_876(unsigned int x)
{
    unsigned int acc = x + 876;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 876u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_877(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 877u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6139u;
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

static unsigned int func_878(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 879u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_879(unsigned int x)
{
    Triple t;
    t.a = x + 879u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1879u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_880(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 883u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 880u;
}

static unsigned int func_881(unsigned int x)
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

static unsigned int func_882(unsigned int x)
{
    unsigned int acc = x + 882;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 882u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_883(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 883u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6181u;
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

static unsigned int func_884(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 885u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_885(unsigned int x)
{
    Triple t;
    t.a = x + 885u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1885u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_886(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 889u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 886u;
}

static unsigned int func_887(unsigned int x)
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

static unsigned int func_888(unsigned int x)
{
    unsigned int acc = x + 888;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 888u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_889(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 889u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6223u;
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

static unsigned int func_890(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 891u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_891(unsigned int x)
{
    Triple t;
    t.a = x + 891u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1891u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_892(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 895u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 892u;
}

static unsigned int func_893(unsigned int x)
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

static unsigned int func_894(unsigned int x)
{
    unsigned int acc = x + 894;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 894u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_895(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 895u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6265u;
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

static unsigned int func_896(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 897u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_897(unsigned int x)
{
    Triple t;
    t.a = x + 897u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1897u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_898(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 901u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 898u;
}

static unsigned int func_899(unsigned int x)
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

static unsigned int func_900(unsigned int x)
{
    unsigned int acc = x + 900;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 900u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_901(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 901u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6307u;
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

static unsigned int func_902(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 903u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_903(unsigned int x)
{
    Triple t;
    t.a = x + 903u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1903u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_904(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 907u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 904u;
}

static unsigned int func_905(unsigned int x)
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

static unsigned int func_906(unsigned int x)
{
    unsigned int acc = x + 906;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 906u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_907(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 907u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6349u;
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

static unsigned int func_908(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 909u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_909(unsigned int x)
{
    Triple t;
    t.a = x + 909u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1909u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_910(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 913u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 910u;
}

static unsigned int func_911(unsigned int x)
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

static unsigned int func_912(unsigned int x)
{
    unsigned int acc = x + 912;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 912u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_913(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 913u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6391u;
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

static unsigned int func_914(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 915u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_915(unsigned int x)
{
    Triple t;
    t.a = x + 915u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1915u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_916(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 919u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 916u;
}

static unsigned int func_917(unsigned int x)
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

static unsigned int func_918(unsigned int x)
{
    unsigned int acc = x + 918;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 918u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_919(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 919u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6433u;
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

static unsigned int func_920(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 921u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_921(unsigned int x)
{
    Triple t;
    t.a = x + 921u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1921u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_922(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 925u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 922u;
}

static unsigned int func_923(unsigned int x)
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

static unsigned int func_924(unsigned int x)
{
    unsigned int acc = x + 924;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 924u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_925(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 925u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6475u;
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

static unsigned int func_926(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 927u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_927(unsigned int x)
{
    Triple t;
    t.a = x + 927u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1927u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_928(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 931u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 928u;
}

static unsigned int func_929(unsigned int x)
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

static unsigned int func_930(unsigned int x)
{
    unsigned int acc = x + 930;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 930u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_931(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 931u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6517u;
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

static unsigned int func_932(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 933u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_933(unsigned int x)
{
    Triple t;
    t.a = x + 933u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1933u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_934(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 937u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 934u;
}

static unsigned int func_935(unsigned int x)
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

static unsigned int func_936(unsigned int x)
{
    unsigned int acc = x + 936;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 936u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_937(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 937u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6559u;
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

static unsigned int func_938(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 939u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_939(unsigned int x)
{
    Triple t;
    t.a = x + 939u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1939u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_940(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 943u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 940u;
}

static unsigned int func_941(unsigned int x)
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

static unsigned int func_942(unsigned int x)
{
    unsigned int acc = x + 942;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 942u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_943(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 943u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6601u;
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

static unsigned int func_944(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 945u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_945(unsigned int x)
{
    Triple t;
    t.a = x + 945u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1945u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_946(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 949u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 946u;
}

static unsigned int func_947(unsigned int x)
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

static unsigned int func_948(unsigned int x)
{
    unsigned int acc = x + 948;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 948u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_949(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 949u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6643u;
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

static unsigned int func_950(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 951u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_951(unsigned int x)
{
    Triple t;
    t.a = x + 951u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1951u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_952(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 955u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 952u;
}

static unsigned int func_953(unsigned int x)
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

static unsigned int func_954(unsigned int x)
{
    unsigned int acc = x + 954;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 954u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_955(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 955u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6685u;
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

static unsigned int func_956(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 957u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_957(unsigned int x)
{
    Triple t;
    t.a = x + 957u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1957u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_958(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 961u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 958u;
}

static unsigned int func_959(unsigned int x)
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

static unsigned int func_960(unsigned int x)
{
    unsigned int acc = x + 960;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 960u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_961(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 961u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6727u;
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

static unsigned int func_962(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 963u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_963(unsigned int x)
{
    Triple t;
    t.a = x + 963u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1963u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_964(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 967u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 964u;
}

static unsigned int func_965(unsigned int x)
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

static unsigned int func_966(unsigned int x)
{
    unsigned int acc = x + 966;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 966u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_967(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 967u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6769u;
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

static unsigned int func_968(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 969u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_969(unsigned int x)
{
    Triple t;
    t.a = x + 969u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1969u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_970(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 973u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 970u;
}

static unsigned int func_971(unsigned int x)
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

static unsigned int func_972(unsigned int x)
{
    unsigned int acc = x + 972;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 972u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_973(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 973u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6811u;
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

static unsigned int func_974(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 975u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_975(unsigned int x)
{
    Triple t;
    t.a = x + 975u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1975u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_976(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 979u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 976u;
}

static unsigned int func_977(unsigned int x)
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

static unsigned int func_978(unsigned int x)
{
    unsigned int acc = x + 978;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 978u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_979(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 979u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6853u;
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

static unsigned int func_980(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 981u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_981(unsigned int x)
{
    Triple t;
    t.a = x + 981u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1981u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_982(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 985u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 982u;
}

static unsigned int func_983(unsigned int x)
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

static unsigned int func_984(unsigned int x)
{
    unsigned int acc = x + 984;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 984u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_985(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 985u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6895u;
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

static unsigned int func_986(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 987u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_987(unsigned int x)
{
    Triple t;
    t.a = x + 987u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 1987u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_988(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 991u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 988u;
}

static unsigned int func_989(unsigned int x)
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

static unsigned int func_990(unsigned int x)
{
    unsigned int acc = x + 990;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 990u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_991(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 991u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6937u;
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

static unsigned int func_992(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 993u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_993(unsigned int x)
{
    Triple t;
    t.a = x + 993u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 1993u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_994(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 997u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 994u;
}

static unsigned int func_995(unsigned int x)
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

static unsigned int func_996(unsigned int x)
{
    unsigned int acc = x + 996;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 996u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_997(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 997u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 6979u;
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

static unsigned int func_998(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 999u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_999(unsigned int x)
{
    Triple t;
    t.a = x + 999u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 1999u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1000(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1003u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1000u;
}

static unsigned int func_1001(unsigned int x)
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

static unsigned int func_1002(unsigned int x)
{
    unsigned int acc = x + 1002;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1002u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_1003(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1003u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7021u;
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

static unsigned int func_1004(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1005u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_1005(unsigned int x)
{
    Triple t;
    t.a = x + 1005u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2005u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1006(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1009u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1006u;
}

static unsigned int func_1007(unsigned int x)
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

static unsigned int func_1008(unsigned int x)
{
    unsigned int acc = x + 1008;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1008u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_1009(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1009u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7063u;
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

static unsigned int func_1010(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1011u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_1011(unsigned int x)
{
    Triple t;
    t.a = x + 1011u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2011u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1012(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1015u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1012u;
}

static unsigned int func_1013(unsigned int x)
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

static unsigned int func_1014(unsigned int x)
{
    unsigned int acc = x + 1014;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1014u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_1015(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1015u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7105u;
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

static unsigned int func_1016(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1017u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_1017(unsigned int x)
{
    Triple t;
    t.a = x + 1017u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2017u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1018(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1021u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1018u;
}

static unsigned int func_1019(unsigned int x)
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

static unsigned int func_1020(unsigned int x)
{
    unsigned int acc = x + 1020;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1020u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_1021(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1021u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7147u;
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

static unsigned int func_1022(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1023u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_1023(unsigned int x)
{
    Triple t;
    t.a = x + 1023u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2023u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1024(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1027u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1024u;
}

static unsigned int func_1025(unsigned int x)
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

static unsigned int func_1026(unsigned int x)
{
    unsigned int acc = x + 1026;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1026u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_1027(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1027u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7189u;
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

static unsigned int func_1028(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1029u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_1029(unsigned int x)
{
    Triple t;
    t.a = x + 1029u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2029u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1030(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1033u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1030u;
}

static unsigned int func_1031(unsigned int x)
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

static unsigned int func_1032(unsigned int x)
{
    unsigned int acc = x + 1032;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1032u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_1033(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1033u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7231u;
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

static unsigned int func_1034(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1035u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_1035(unsigned int x)
{
    Triple t;
    t.a = x + 1035u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2035u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1036(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1039u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1036u;
}

static unsigned int func_1037(unsigned int x)
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

static unsigned int func_1038(unsigned int x)
{
    unsigned int acc = x + 1038;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1038u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_1039(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1039u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7273u;
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

static unsigned int func_1040(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1041u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_1041(unsigned int x)
{
    Triple t;
    t.a = x + 1041u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2041u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1042(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1045u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1042u;
}

static unsigned int func_1043(unsigned int x)
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

static unsigned int func_1044(unsigned int x)
{
    unsigned int acc = x + 1044;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1044u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_1045(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1045u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7315u;
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

static unsigned int func_1046(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1047u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_1047(unsigned int x)
{
    Triple t;
    t.a = x + 1047u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2047u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1048(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1051u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1048u;
}

static unsigned int func_1049(unsigned int x)
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

static unsigned int func_1050(unsigned int x)
{
    unsigned int acc = x + 1050;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1050u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_1051(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1051u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7357u;
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

static unsigned int func_1052(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1053u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_1053(unsigned int x)
{
    Triple t;
    t.a = x + 1053u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2053u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1054(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1057u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1054u;
}

static unsigned int func_1055(unsigned int x)
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

static unsigned int func_1056(unsigned int x)
{
    unsigned int acc = x + 1056;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1056u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_1057(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1057u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7399u;
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

static unsigned int func_1058(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1059u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_1059(unsigned int x)
{
    Triple t;
    t.a = x + 1059u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2059u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1060(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1063u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1060u;
}

static unsigned int func_1061(unsigned int x)
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

static unsigned int func_1062(unsigned int x)
{
    unsigned int acc = x + 1062;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1062u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_1063(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1063u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7441u;
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

static unsigned int func_1064(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1065u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_1065(unsigned int x)
{
    Triple t;
    t.a = x + 1065u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2065u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1066(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1069u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1066u;
}

static unsigned int func_1067(unsigned int x)
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

static unsigned int func_1068(unsigned int x)
{
    unsigned int acc = x + 1068;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1068u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_1069(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1069u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7483u;
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

static unsigned int func_1070(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1071u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_1071(unsigned int x)
{
    Triple t;
    t.a = x + 1071u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2071u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1072(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1075u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1072u;
}

static unsigned int func_1073(unsigned int x)
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

static unsigned int func_1074(unsigned int x)
{
    unsigned int acc = x + 1074;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1074u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_1075(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1075u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7525u;
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

static unsigned int func_1076(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1077u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_1077(unsigned int x)
{
    Triple t;
    t.a = x + 1077u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2077u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1078(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1081u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1078u;
}

static unsigned int func_1079(unsigned int x)
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

static unsigned int func_1080(unsigned int x)
{
    unsigned int acc = x + 1080;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1080u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_1081(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1081u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7567u;
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

static unsigned int func_1082(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1083u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_1083(unsigned int x)
{
    Triple t;
    t.a = x + 1083u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2083u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1084(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1087u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1084u;
}

static unsigned int func_1085(unsigned int x)
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

static unsigned int func_1086(unsigned int x)
{
    unsigned int acc = x + 1086;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1086u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_1087(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1087u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7609u;
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

static unsigned int func_1088(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1089u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_1089(unsigned int x)
{
    Triple t;
    t.a = x + 1089u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2089u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1090(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1093u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1090u;
}

static unsigned int func_1091(unsigned int x)
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

static unsigned int func_1092(unsigned int x)
{
    unsigned int acc = x + 1092;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1092u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_1093(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1093u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7651u;
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

static unsigned int func_1094(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1095u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_1095(unsigned int x)
{
    Triple t;
    t.a = x + 1095u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2095u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1096(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1099u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1096u;
}

static unsigned int func_1097(unsigned int x)
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

static unsigned int func_1098(unsigned int x)
{
    unsigned int acc = x + 1098;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1098u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_1099(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1099u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7693u;
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

static unsigned int func_1100(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1101u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_1101(unsigned int x)
{
    Triple t;
    t.a = x + 1101u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2101u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1102(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1105u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1102u;
}

static unsigned int func_1103(unsigned int x)
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

static unsigned int func_1104(unsigned int x)
{
    unsigned int acc = x + 1104;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1104u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_1105(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1105u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7735u;
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

static unsigned int func_1106(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1107u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_1107(unsigned int x)
{
    Triple t;
    t.a = x + 1107u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2107u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1108(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1111u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1108u;
}

static unsigned int func_1109(unsigned int x)
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

static unsigned int func_1110(unsigned int x)
{
    unsigned int acc = x + 1110;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1110u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_1111(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1111u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7777u;
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

static unsigned int func_1112(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1113u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_1113(unsigned int x)
{
    Triple t;
    t.a = x + 1113u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2113u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1114(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1117u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1114u;
}

static unsigned int func_1115(unsigned int x)
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

static unsigned int func_1116(unsigned int x)
{
    unsigned int acc = x + 1116;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1116u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_1117(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1117u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7819u;
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

static unsigned int func_1118(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1119u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_1119(unsigned int x)
{
    Triple t;
    t.a = x + 1119u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2119u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1120(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1123u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1120u;
}

static unsigned int func_1121(unsigned int x)
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

static unsigned int func_1122(unsigned int x)
{
    unsigned int acc = x + 1122;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1122u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_1123(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1123u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7861u;
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

static unsigned int func_1124(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1125u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_1125(unsigned int x)
{
    Triple t;
    t.a = x + 1125u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2125u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1126(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1129u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1126u;
}

static unsigned int func_1127(unsigned int x)
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

static unsigned int func_1128(unsigned int x)
{
    unsigned int acc = x + 1128;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1128u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_1129(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1129u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7903u;
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

static unsigned int func_1130(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1131u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_1131(unsigned int x)
{
    Triple t;
    t.a = x + 1131u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2131u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1132(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1135u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1132u;
}

static unsigned int func_1133(unsigned int x)
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

static unsigned int func_1134(unsigned int x)
{
    unsigned int acc = x + 1134;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1134u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_1135(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1135u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7945u;
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

static unsigned int func_1136(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1137u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_1137(unsigned int x)
{
    Triple t;
    t.a = x + 1137u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2137u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1138(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1141u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1138u;
}

static unsigned int func_1139(unsigned int x)
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

static unsigned int func_1140(unsigned int x)
{
    unsigned int acc = x + 1140;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1140u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_1141(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1141u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 7987u;
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

static unsigned int func_1142(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1143u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_1143(unsigned int x)
{
    Triple t;
    t.a = x + 1143u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2143u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1144(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1147u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1144u;
}

static unsigned int func_1145(unsigned int x)
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

static unsigned int func_1146(unsigned int x)
{
    unsigned int acc = x + 1146;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1146u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_1147(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1147u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8029u;
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

static unsigned int func_1148(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1149u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_1149(unsigned int x)
{
    Triple t;
    t.a = x + 1149u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2149u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1150(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1153u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1150u;
}

static unsigned int func_1151(unsigned int x)
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

static unsigned int func_1152(unsigned int x)
{
    unsigned int acc = x + 1152;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1152u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_1153(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1153u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8071u;
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

static unsigned int func_1154(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1155u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_1155(unsigned int x)
{
    Triple t;
    t.a = x + 1155u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2155u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1156(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1159u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1156u;
}

static unsigned int func_1157(unsigned int x)
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

static unsigned int func_1158(unsigned int x)
{
    unsigned int acc = x + 1158;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1158u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_1159(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1159u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8113u;
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

static unsigned int func_1160(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1161u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_1161(unsigned int x)
{
    Triple t;
    t.a = x + 1161u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2161u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1162(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1165u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1162u;
}

static unsigned int func_1163(unsigned int x)
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

static unsigned int func_1164(unsigned int x)
{
    unsigned int acc = x + 1164;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1164u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_1165(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1165u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8155u;
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

static unsigned int func_1166(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1167u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_1167(unsigned int x)
{
    Triple t;
    t.a = x + 1167u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2167u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1168(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1171u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1168u;
}

static unsigned int func_1169(unsigned int x)
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

static unsigned int func_1170(unsigned int x)
{
    unsigned int acc = x + 1170;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1170u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_1171(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1171u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8197u;
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

static unsigned int func_1172(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1173u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_1173(unsigned int x)
{
    Triple t;
    t.a = x + 1173u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2173u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1174(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1177u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1174u;
}

static unsigned int func_1175(unsigned int x)
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

static unsigned int func_1176(unsigned int x)
{
    unsigned int acc = x + 1176;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1176u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_1177(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1177u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8239u;
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

static unsigned int func_1178(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1179u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_1179(unsigned int x)
{
    Triple t;
    t.a = x + 1179u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2179u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1180(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1183u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1180u;
}

static unsigned int func_1181(unsigned int x)
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

static unsigned int func_1182(unsigned int x)
{
    unsigned int acc = x + 1182;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1182u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_1183(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1183u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8281u;
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

static unsigned int func_1184(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1185u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_1185(unsigned int x)
{
    Triple t;
    t.a = x + 1185u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2185u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1186(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1189u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1186u;
}

static unsigned int func_1187(unsigned int x)
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

static unsigned int func_1188(unsigned int x)
{
    unsigned int acc = x + 1188;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1188u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_1189(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1189u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8323u;
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

static unsigned int func_1190(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1191u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_1191(unsigned int x)
{
    Triple t;
    t.a = x + 1191u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2191u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1192(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1195u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1192u;
}

static unsigned int func_1193(unsigned int x)
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

static unsigned int func_1194(unsigned int x)
{
    unsigned int acc = x + 1194;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1194u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_1195(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1195u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8365u;
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

static unsigned int func_1196(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1197u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_1197(unsigned int x)
{
    Triple t;
    t.a = x + 1197u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2197u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1198(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1201u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1198u;
}

static unsigned int func_1199(unsigned int x)
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

static unsigned int func_1200(unsigned int x)
{
    unsigned int acc = x + 1200;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1200u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_1201(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1201u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8407u;
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

static unsigned int func_1202(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1203u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_1203(unsigned int x)
{
    Triple t;
    t.a = x + 1203u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2203u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1204(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1207u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1204u;
}

static unsigned int func_1205(unsigned int x)
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

static unsigned int func_1206(unsigned int x)
{
    unsigned int acc = x + 1206;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1206u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_1207(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1207u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8449u;
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

static unsigned int func_1208(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1209u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_1209(unsigned int x)
{
    Triple t;
    t.a = x + 1209u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2209u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1210(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1213u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1210u;
}

static unsigned int func_1211(unsigned int x)
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

static unsigned int func_1212(unsigned int x)
{
    unsigned int acc = x + 1212;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1212u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_1213(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1213u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8491u;
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

static unsigned int func_1214(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1215u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_1215(unsigned int x)
{
    Triple t;
    t.a = x + 1215u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2215u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1216(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1219u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1216u;
}

static unsigned int func_1217(unsigned int x)
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

static unsigned int func_1218(unsigned int x)
{
    unsigned int acc = x + 1218;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1218u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_1219(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1219u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8533u;
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

static unsigned int func_1220(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1221u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_1221(unsigned int x)
{
    Triple t;
    t.a = x + 1221u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2221u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1222(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1225u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1222u;
}

static unsigned int func_1223(unsigned int x)
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

static unsigned int func_1224(unsigned int x)
{
    unsigned int acc = x + 1224;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1224u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_1225(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1225u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8575u;
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

static unsigned int func_1226(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1227u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_1227(unsigned int x)
{
    Triple t;
    t.a = x + 1227u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2227u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1228(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1231u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1228u;
}

static unsigned int func_1229(unsigned int x)
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

static unsigned int func_1230(unsigned int x)
{
    unsigned int acc = x + 1230;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1230u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_1231(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1231u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8617u;
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

static unsigned int func_1232(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1233u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_1233(unsigned int x)
{
    Triple t;
    t.a = x + 1233u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2233u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1234(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1237u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1234u;
}

static unsigned int func_1235(unsigned int x)
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

static unsigned int func_1236(unsigned int x)
{
    unsigned int acc = x + 1236;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1236u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_1237(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1237u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8659u;
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

static unsigned int func_1238(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1239u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_1239(unsigned int x)
{
    Triple t;
    t.a = x + 1239u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2239u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1240(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1243u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1240u;
}

static unsigned int func_1241(unsigned int x)
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

static unsigned int func_1242(unsigned int x)
{
    unsigned int acc = x + 1242;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1242u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_1243(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1243u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8701u;
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

static unsigned int func_1244(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1245u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_1245(unsigned int x)
{
    Triple t;
    t.a = x + 1245u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2245u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1246(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1249u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1246u;
}

static unsigned int func_1247(unsigned int x)
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

static unsigned int func_1248(unsigned int x)
{
    unsigned int acc = x + 1248;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1248u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_1249(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1249u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8743u;
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

static unsigned int func_1250(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1251u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_1251(unsigned int x)
{
    Triple t;
    t.a = x + 1251u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2251u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1252(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1255u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1252u;
}

static unsigned int func_1253(unsigned int x)
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

static unsigned int func_1254(unsigned int x)
{
    unsigned int acc = x + 1254;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1254u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_1255(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1255u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8785u;
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

static unsigned int func_1256(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1257u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_1257(unsigned int x)
{
    Triple t;
    t.a = x + 1257u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2257u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1258(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1261u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1258u;
}

static unsigned int func_1259(unsigned int x)
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

static unsigned int func_1260(unsigned int x)
{
    unsigned int acc = x + 1260;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1260u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_1261(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1261u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8827u;
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

static unsigned int func_1262(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1263u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_1263(unsigned int x)
{
    Triple t;
    t.a = x + 1263u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2263u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1264(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1267u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1264u;
}

static unsigned int func_1265(unsigned int x)
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

static unsigned int func_1266(unsigned int x)
{
    unsigned int acc = x + 1266;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1266u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_1267(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1267u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8869u;
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

static unsigned int func_1268(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1269u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_1269(unsigned int x)
{
    Triple t;
    t.a = x + 1269u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2269u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1270(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1273u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1270u;
}

static unsigned int func_1271(unsigned int x)
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

static unsigned int func_1272(unsigned int x)
{
    unsigned int acc = x + 1272;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1272u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_1273(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1273u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8911u;
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

static unsigned int func_1274(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1275u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_1275(unsigned int x)
{
    Triple t;
    t.a = x + 1275u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2275u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1276(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1279u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1276u;
}

static unsigned int func_1277(unsigned int x)
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

static unsigned int func_1278(unsigned int x)
{
    unsigned int acc = x + 1278;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1278u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_1279(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1279u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8953u;
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

static unsigned int func_1280(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1281u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_1281(unsigned int x)
{
    Triple t;
    t.a = x + 1281u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2281u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1282(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1285u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1282u;
}

static unsigned int func_1283(unsigned int x)
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

static unsigned int func_1284(unsigned int x)
{
    unsigned int acc = x + 1284;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1284u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_1285(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1285u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 8995u;
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

static unsigned int func_1286(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1287u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_1287(unsigned int x)
{
    Triple t;
    t.a = x + 1287u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2287u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1288(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1291u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1288u;
}

static unsigned int func_1289(unsigned int x)
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

static unsigned int func_1290(unsigned int x)
{
    unsigned int acc = x + 1290;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1290u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_1291(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1291u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9037u;
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

static unsigned int func_1292(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1293u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_1293(unsigned int x)
{
    Triple t;
    t.a = x + 1293u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2293u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1294(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1297u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1294u;
}

static unsigned int func_1295(unsigned int x)
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

static unsigned int func_1296(unsigned int x)
{
    unsigned int acc = x + 1296;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1296u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_1297(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1297u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9079u;
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

static unsigned int func_1298(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1299u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_1299(unsigned int x)
{
    Triple t;
    t.a = x + 1299u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2299u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1300(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1303u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1300u;
}

static unsigned int func_1301(unsigned int x)
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

static unsigned int func_1302(unsigned int x)
{
    unsigned int acc = x + 1302;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1302u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_1303(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1303u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9121u;
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

static unsigned int func_1304(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1305u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_1305(unsigned int x)
{
    Triple t;
    t.a = x + 1305u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2305u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1306(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1309u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1306u;
}

static unsigned int func_1307(unsigned int x)
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

static unsigned int func_1308(unsigned int x)
{
    unsigned int acc = x + 1308;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1308u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_1309(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1309u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9163u;
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

static unsigned int func_1310(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1311u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_1311(unsigned int x)
{
    Triple t;
    t.a = x + 1311u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2311u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1312(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1315u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1312u;
}

static unsigned int func_1313(unsigned int x)
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

static unsigned int func_1314(unsigned int x)
{
    unsigned int acc = x + 1314;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1314u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_1315(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1315u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9205u;
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

static unsigned int func_1316(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1317u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_1317(unsigned int x)
{
    Triple t;
    t.a = x + 1317u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2317u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1318(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1321u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1318u;
}

static unsigned int func_1319(unsigned int x)
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

static unsigned int func_1320(unsigned int x)
{
    unsigned int acc = x + 1320;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1320u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_1321(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1321u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9247u;
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

static unsigned int func_1322(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1323u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_1323(unsigned int x)
{
    Triple t;
    t.a = x + 1323u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2323u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1324(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1327u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1324u;
}

static unsigned int func_1325(unsigned int x)
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

static unsigned int func_1326(unsigned int x)
{
    unsigned int acc = x + 1326;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1326u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_1327(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1327u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9289u;
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

static unsigned int func_1328(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1329u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_1329(unsigned int x)
{
    Triple t;
    t.a = x + 1329u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2329u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1330(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1333u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1330u;
}

static unsigned int func_1331(unsigned int x)
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

static unsigned int func_1332(unsigned int x)
{
    unsigned int acc = x + 1332;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1332u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_1333(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1333u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9331u;
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

static unsigned int func_1334(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1335u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_1335(unsigned int x)
{
    Triple t;
    t.a = x + 1335u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2335u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1336(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1339u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1336u;
}

static unsigned int func_1337(unsigned int x)
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

static unsigned int func_1338(unsigned int x)
{
    unsigned int acc = x + 1338;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1338u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_1339(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1339u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9373u;
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

static unsigned int func_1340(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1341u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_1341(unsigned int x)
{
    Triple t;
    t.a = x + 1341u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2341u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1342(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1345u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1342u;
}

static unsigned int func_1343(unsigned int x)
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

static unsigned int func_1344(unsigned int x)
{
    unsigned int acc = x + 1344;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1344u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_1345(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1345u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9415u;
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

static unsigned int func_1346(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1347u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_1347(unsigned int x)
{
    Triple t;
    t.a = x + 1347u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2347u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1348(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1351u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1348u;
}

static unsigned int func_1349(unsigned int x)
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

static unsigned int func_1350(unsigned int x)
{
    unsigned int acc = x + 1350;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1350u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_1351(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1351u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9457u;
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

static unsigned int func_1352(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1353u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_1353(unsigned int x)
{
    Triple t;
    t.a = x + 1353u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2353u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1354(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1357u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1354u;
}

static unsigned int func_1355(unsigned int x)
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

static unsigned int func_1356(unsigned int x)
{
    unsigned int acc = x + 1356;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1356u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_1357(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1357u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9499u;
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

static unsigned int func_1358(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1359u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_1359(unsigned int x)
{
    Triple t;
    t.a = x + 1359u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2359u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1360(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1363u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1360u;
}

static unsigned int func_1361(unsigned int x)
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

static unsigned int func_1362(unsigned int x)
{
    unsigned int acc = x + 1362;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1362u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_1363(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1363u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9541u;
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

static unsigned int func_1364(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1365u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_1365(unsigned int x)
{
    Triple t;
    t.a = x + 1365u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2365u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1366(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1369u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1366u;
}

static unsigned int func_1367(unsigned int x)
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

static unsigned int func_1368(unsigned int x)
{
    unsigned int acc = x + 1368;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1368u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_1369(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1369u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9583u;
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

static unsigned int func_1370(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1371u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_1371(unsigned int x)
{
    Triple t;
    t.a = x + 1371u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2371u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1372(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1375u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1372u;
}

static unsigned int func_1373(unsigned int x)
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

static unsigned int func_1374(unsigned int x)
{
    unsigned int acc = x + 1374;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1374u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_1375(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1375u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9625u;
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

static unsigned int func_1376(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1377u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_1377(unsigned int x)
{
    Triple t;
    t.a = x + 1377u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2377u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1378(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1381u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1378u;
}

static unsigned int func_1379(unsigned int x)
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

static unsigned int func_1380(unsigned int x)
{
    unsigned int acc = x + 1380;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1380u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_1381(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1381u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9667u;
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

static unsigned int func_1382(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1383u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_1383(unsigned int x)
{
    Triple t;
    t.a = x + 1383u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2383u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1384(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1387u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1384u;
}

static unsigned int func_1385(unsigned int x)
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

static unsigned int func_1386(unsigned int x)
{
    unsigned int acc = x + 1386;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1386u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_1387(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1387u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9709u;
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

static unsigned int func_1388(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1389u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_1389(unsigned int x)
{
    Triple t;
    t.a = x + 1389u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2389u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1390(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1393u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1390u;
}

static unsigned int func_1391(unsigned int x)
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

static unsigned int func_1392(unsigned int x)
{
    unsigned int acc = x + 1392;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1392u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_1393(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1393u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9751u;
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

static unsigned int func_1394(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1395u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_1395(unsigned int x)
{
    Triple t;
    t.a = x + 1395u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2395u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1396(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1399u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1396u;
}

static unsigned int func_1397(unsigned int x)
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

static unsigned int func_1398(unsigned int x)
{
    unsigned int acc = x + 1398;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1398u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_1399(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1399u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9793u;
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

static unsigned int func_1400(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1401u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_1401(unsigned int x)
{
    Triple t;
    t.a = x + 1401u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2401u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1402(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1405u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1402u;
}

static unsigned int func_1403(unsigned int x)
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

static unsigned int func_1404(unsigned int x)
{
    unsigned int acc = x + 1404;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1404u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_1405(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1405u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9835u;
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

static unsigned int func_1406(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1407u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_1407(unsigned int x)
{
    Triple t;
    t.a = x + 1407u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2407u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1408(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1411u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1408u;
}

static unsigned int func_1409(unsigned int x)
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

static unsigned int func_1410(unsigned int x)
{
    unsigned int acc = x + 1410;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1410u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_1411(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1411u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9877u;
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

static unsigned int func_1412(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1413u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 1u);
    }
    return sum;
}

static unsigned int func_1413(unsigned int x)
{
    Triple t;
    t.a = x + 1413u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2413u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1414(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1417u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1414u;
}

static unsigned int func_1415(unsigned int x)
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

static unsigned int func_1416(unsigned int x)
{
    unsigned int acc = x + 1416;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1416u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_1417(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1417u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9919u;
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

static unsigned int func_1418(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1419u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 7u);
    }
    return sum;
}

static unsigned int func_1419(unsigned int x)
{
    Triple t;
    t.a = x + 1419u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2419u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1420(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1423u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1420u;
}

static unsigned int func_1421(unsigned int x)
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

static unsigned int func_1422(unsigned int x)
{
    unsigned int acc = x + 1422;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1422u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_1423(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1423u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 9961u;
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

static unsigned int func_1424(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1425u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 13u);
    }
    return sum;
}

static unsigned int func_1425(unsigned int x)
{
    Triple t;
    t.a = x + 1425u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2425u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1426(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1429u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1426u;
}

static unsigned int func_1427(unsigned int x)
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

static unsigned int func_1428(unsigned int x)
{
    unsigned int acc = x + 1428;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1428u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_1429(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1429u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10003u;
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

static unsigned int func_1430(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1431u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 2u);
    }
    return sum;
}

static unsigned int func_1431(unsigned int x)
{
    Triple t;
    t.a = x + 1431u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2431u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1432(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1435u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1432u;
}

static unsigned int func_1433(unsigned int x)
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

static unsigned int func_1434(unsigned int x)
{
    unsigned int acc = x + 1434;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1434u;
    } else {
        acc -= 4u;
    }
    return acc;
}

static unsigned int func_1435(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1435u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10045u;
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

static unsigned int func_1436(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1437u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 8u);
    }
    return sum;
}

static unsigned int func_1437(unsigned int x)
{
    Triple t;
    t.a = x + 1437u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2437u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1438(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1441u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1438u;
}

static unsigned int func_1439(unsigned int x)
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

static unsigned int func_1440(unsigned int x)
{
    unsigned int acc = x + 1440;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1440u;
    } else {
        acc -= 10u;
    }
    return acc;
}

static unsigned int func_1441(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1441u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10087u;
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

static unsigned int func_1442(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1443u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 14u);
    }
    return sum;
}

static unsigned int func_1443(unsigned int x)
{
    Triple t;
    t.a = x + 1443u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2443u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1444(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1447u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1444u;
}

static unsigned int func_1445(unsigned int x)
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

static unsigned int func_1446(unsigned int x)
{
    unsigned int acc = x + 1446;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 8u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1446u;
    } else {
        acc -= 3u;
    }
    return acc;
}

static unsigned int func_1447(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1447u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10129u;
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

static unsigned int func_1448(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1449u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 3u);
    }
    return sum;
}

static unsigned int func_1449(unsigned int x)
{
    Triple t;
    t.a = x + 1449u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2449u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1450(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1453u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1450u;
}

static unsigned int func_1451(unsigned int x)
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

static unsigned int func_1452(unsigned int x)
{
    unsigned int acc = x + 1452;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 3u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1452u;
    } else {
        acc -= 9u;
    }
    return acc;
}

static unsigned int func_1453(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1453u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10171u;
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

static unsigned int func_1454(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1455u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 9u);
    }
    return sum;
}

static unsigned int func_1455(unsigned int x)
{
    Triple t;
    t.a = x + 1455u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2455u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1456(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1459u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1456u;
}

static unsigned int func_1457(unsigned int x)
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

static unsigned int func_1458(unsigned int x)
{
    unsigned int acc = x + 1458;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 9u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1458u;
    } else {
        acc -= 2u;
    }
    return acc;
}

static unsigned int func_1459(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1459u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10213u;
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

static unsigned int func_1460(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1461u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 15u);
    }
    return sum;
}

static unsigned int func_1461(unsigned int x)
{
    Triple t;
    t.a = x + 1461u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2461u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1462(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1465u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1462u;
}

static unsigned int func_1463(unsigned int x)
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

static unsigned int func_1464(unsigned int x)
{
    unsigned int acc = x + 1464;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 4u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1464u;
    } else {
        acc -= 8u;
    }
    return acc;
}

static unsigned int func_1465(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1465u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10255u;
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

static unsigned int func_1466(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1467u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 4u);
    }
    return sum;
}

static unsigned int func_1467(unsigned int x)
{
    Triple t;
    t.a = x + 1467u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2467u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1468(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1471u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1468u;
}

static unsigned int func_1469(unsigned int x)
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

static unsigned int func_1470(unsigned int x)
{
    unsigned int acc = x + 1470;
    unsigned int k;
    for (k = 0; k < 5; k++) {
        acc = acc * 10u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1470u;
    } else {
        acc -= 1u;
    }
    return acc;
}

static unsigned int func_1471(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1471u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10297u;
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

static unsigned int func_1472(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1473u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 10u);
    }
    return sum;
}

static unsigned int func_1473(unsigned int x)
{
    Triple t;
    t.a = x + 1473u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2473u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1474(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1477u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1474u;
}

static unsigned int func_1475(unsigned int x)
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

static unsigned int func_1476(unsigned int x)
{
    unsigned int acc = x + 1476;
    unsigned int k;
    for (k = 0; k < 11; k++) {
        acc = acc * 5u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1476u;
    } else {
        acc -= 7u;
    }
    return acc;
}

static unsigned int func_1477(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1477u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10339u;
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

static unsigned int func_1478(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1479u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 16u);
    }
    return sum;
}

static unsigned int func_1479(unsigned int x)
{
    Triple t;
    t.a = x + 1479u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2479u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1480(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1483u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1480u;
}

static unsigned int func_1481(unsigned int x)
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

static unsigned int func_1482(unsigned int x)
{
    unsigned int acc = x + 1482;
    unsigned int k;
    for (k = 0; k < 10; k++) {
        acc = acc * 11u + k;
        acc ^= (acc >> 3);
    }
    if (acc % 2u == 0u) {
        acc += 1482u;
    } else {
        acc -= 0u;
    }
    return acc;
}

static unsigned int func_1483(unsigned int x)
{
    unsigned int v = x % 7u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1483u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10381u;
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

static unsigned int func_1484(unsigned int x)
{
    unsigned int arr[10];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        arr[idx] = x + idx * 1485u;
    }
    for (idx = 0; idx < 10; idx++) {
        sum += arr[idx] ^ (idx + 5u);
    }
    return sum;
}

static unsigned int func_1485(unsigned int x)
{
    Triple t;
    t.a = x + 1485u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2485u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1486(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1489u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1486u;
}

static unsigned int func_1487(unsigned int x)
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

static unsigned int func_1488(unsigned int x)
{
    unsigned int acc = x + 1488;
    unsigned int k;
    for (k = 0; k < 9; k++) {
        acc = acc * 6u + k;
        acc ^= (acc >> 4);
    }
    if (acc % 2u == 0u) {
        acc += 1488u;
    } else {
        acc -= 6u;
    }
    return acc;
}

static unsigned int func_1489(unsigned int x)
{
    unsigned int v = x % 8u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1489u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10423u;
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

static unsigned int func_1490(unsigned int x)
{
    unsigned int arr[6];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 6; idx++) {
        arr[idx] = x + idx * 1491u;
    }
    for (idx = 0; idx < 6; idx++) {
        sum += arr[idx] ^ (idx + 11u);
    }
    return sum;
}

static unsigned int func_1491(unsigned int x)
{
    Triple t;
    t.a = x + 1491u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2491u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1492(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1495u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1492u;
}

static unsigned int func_1493(unsigned int x)
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

static unsigned int func_1494(unsigned int x)
{
    unsigned int acc = x + 1494;
    unsigned int k;
    for (k = 0; k < 8; k++) {
        acc = acc * 12u + k;
        acc ^= (acc >> 5);
    }
    if (acc % 2u == 0u) {
        acc += 1494u;
    } else {
        acc -= 12u;
    }
    return acc;
}

static unsigned int func_1495(unsigned int x)
{
    unsigned int v = x % 4u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1495u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10465u;
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

static unsigned int func_1496(unsigned int x)
{
    unsigned int arr[7];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 7; idx++) {
        arr[idx] = x + idx * 1497u;
    }
    for (idx = 0; idx < 7; idx++) {
        sum += arr[idx] ^ (idx + 0u);
    }
    return sum;
}

static unsigned int func_1497(unsigned int x)
{
    Triple t;
    t.a = x + 1497u;
    t.b = x * 4u;
    t.c = t.a ^ t.b;
    while (t.c > 2497u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1498(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1501u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1498u;
}

static unsigned int func_1499(unsigned int x)
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

static unsigned int func_1500(unsigned int x)
{
    unsigned int acc = x + 1500;
    unsigned int k;
    for (k = 0; k < 7; k++) {
        acc = acc * 7u + k;
        acc ^= (acc >> 1);
    }
    if (acc % 2u == 0u) {
        acc += 1500u;
    } else {
        acc -= 5u;
    }
    return acc;
}

static unsigned int func_1501(unsigned int x)
{
    unsigned int v = x % 5u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1501u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10507u;
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

static unsigned int func_1502(unsigned int x)
{
    unsigned int arr[8];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 8; idx++) {
        arr[idx] = x + idx * 1503u;
    }
    for (idx = 0; idx < 8; idx++) {
        sum += arr[idx] ^ (idx + 6u);
    }
    return sum;
}

static unsigned int func_1503(unsigned int x)
{
    Triple t;
    t.a = x + 1503u;
    t.b = x * 1u;
    t.c = t.a ^ t.b;
    while (t.c > 2503u) {
        t.c = t.c / 2u + t.a % 6u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1504(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1507u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1504u;
}

static unsigned int func_1505(unsigned int x)
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

static unsigned int func_1506(unsigned int x)
{
    unsigned int acc = x + 1506;
    unsigned int k;
    for (k = 0; k < 6; k++) {
        acc = acc * 13u + k;
        acc ^= (acc >> 2);
    }
    if (acc % 2u == 0u) {
        acc += 1506u;
    } else {
        acc -= 11u;
    }
    return acc;
}

static unsigned int func_1507(unsigned int x)
{
    unsigned int v = x % 6u;
    unsigned int r = 0;
    switch (v) {
    case 0:
        r = x + 1507u;
        break;
    case 1:
        r = x * 3u;
        break;
    case 2:
        r = x ^ 10549u;
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

static unsigned int func_1508(unsigned int x)
{
    unsigned int arr[9];
    unsigned int idx;
    unsigned int sum = 0;
    for (idx = 0; idx < 9; idx++) {
        arr[idx] = x + idx * 1509u;
    }
    for (idx = 0; idx < 9; idx++) {
        sum += arr[idx] ^ (idx + 12u);
    }
    return sum;
}

static unsigned int func_1509(unsigned int x)
{
    Triple t;
    t.a = x + 1509u;
    t.b = x * 7u;
    t.c = t.a ^ t.b;
    while (t.c > 2509u) {
        t.c = t.c / 2u + t.a % 4u;
    }
    return t.a + t.b + t.c;
}

static unsigned int func_1510(unsigned int x)
{
    unsigned int a = x;
    unsigned int b = 1513u;
    unsigned int n = 0;
    while (b != 0u && n < 12u) {
        unsigned int tmp = a % b;
        a = b;
        b = tmp;
        n++;
    }
    return a + n + 1510u;
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
    total += func_400(total);
    total += func_401(total);
    total += func_402(total);
    total += func_403(total);
    total += func_404(total);
    total += func_405(total);
    total += func_406(total);
    total += func_407(total);
    total += func_408(total);
    total += func_409(total);
    total += func_410(total);
    total += func_411(total);
    total += func_412(total);
    total += func_413(total);
    total += func_414(total);
    total += func_415(total);
    total += func_416(total);
    total += func_417(total);
    total += func_418(total);
    total += func_419(total);
    total += func_420(total);
    total += func_421(total);
    total += func_422(total);
    total += func_423(total);
    total += func_424(total);
    total += func_425(total);
    total += func_426(total);
    total += func_427(total);
    total += func_428(total);
    total += func_429(total);
    total += func_430(total);
    total += func_431(total);
    total += func_432(total);
    total += func_433(total);
    total += func_434(total);
    total += func_435(total);
    total += func_436(total);
    total += func_437(total);
    total += func_438(total);
    total += func_439(total);
    total += func_440(total);
    total += func_441(total);
    total += func_442(total);
    total += func_443(total);
    total += func_444(total);
    total += func_445(total);
    total += func_446(total);
    total += func_447(total);
    total += func_448(total);
    total += func_449(total);
    total += func_450(total);
    total += func_451(total);
    total += func_452(total);
    total += func_453(total);
    total += func_454(total);
    total += func_455(total);
    total += func_456(total);
    total += func_457(total);
    total += func_458(total);
    total += func_459(total);
    total += func_460(total);
    total += func_461(total);
    total += func_462(total);
    total += func_463(total);
    total += func_464(total);
    total += func_465(total);
    total += func_466(total);
    total += func_467(total);
    total += func_468(total);
    total += func_469(total);
    total += func_470(total);
    total += func_471(total);
    total += func_472(total);
    total += func_473(total);
    total += func_474(total);
    total += func_475(total);
    total += func_476(total);
    total += func_477(total);
    total += func_478(total);
    total += func_479(total);
    total += func_480(total);
    total += func_481(total);
    total += func_482(total);
    total += func_483(total);
    total += func_484(total);
    total += func_485(total);
    total += func_486(total);
    total += func_487(total);
    total += func_488(total);
    total += func_489(total);
    total += func_490(total);
    total += func_491(total);
    total += func_492(total);
    total += func_493(total);
    total += func_494(total);
    total += func_495(total);
    total += func_496(total);
    total += func_497(total);
    total += func_498(total);
    total += func_499(total);
    total += func_500(total);
    total += func_501(total);
    total += func_502(total);
    total += func_503(total);
    total += func_504(total);
    total += func_505(total);
    total += func_506(total);
    total += func_507(total);
    total += func_508(total);
    total += func_509(total);
    total += func_510(total);
    total += func_511(total);
    total += func_512(total);
    total += func_513(total);
    total += func_514(total);
    total += func_515(total);
    total += func_516(total);
    total += func_517(total);
    total += func_518(total);
    total += func_519(total);
    total += func_520(total);
    total += func_521(total);
    total += func_522(total);
    total += func_523(total);
    total += func_524(total);
    total += func_525(total);
    total += func_526(total);
    total += func_527(total);
    total += func_528(total);
    total += func_529(total);
    total += func_530(total);
    total += func_531(total);
    total += func_532(total);
    total += func_533(total);
    total += func_534(total);
    total += func_535(total);
    total += func_536(total);
    total += func_537(total);
    total += func_538(total);
    total += func_539(total);
    total += func_540(total);
    total += func_541(total);
    total += func_542(total);
    total += func_543(total);
    total += func_544(total);
    total += func_545(total);
    total += func_546(total);
    total += func_547(total);
    total += func_548(total);
    total += func_549(total);
    total += func_550(total);
    total += func_551(total);
    total += func_552(total);
    total += func_553(total);
    total += func_554(total);
    total += func_555(total);
    total += func_556(total);
    total += func_557(total);
    total += func_558(total);
    total += func_559(total);
    total += func_560(total);
    total += func_561(total);
    total += func_562(total);
    total += func_563(total);
    total += func_564(total);
    total += func_565(total);
    total += func_566(total);
    total += func_567(total);
    total += func_568(total);
    total += func_569(total);
    total += func_570(total);
    total += func_571(total);
    total += func_572(total);
    total += func_573(total);
    total += func_574(total);
    total += func_575(total);
    total += func_576(total);
    total += func_577(total);
    total += func_578(total);
    total += func_579(total);
    total += func_580(total);
    total += func_581(total);
    total += func_582(total);
    total += func_583(total);
    total += func_584(total);
    total += func_585(total);
    total += func_586(total);
    total += func_587(total);
    total += func_588(total);
    total += func_589(total);
    total += func_590(total);
    total += func_591(total);
    total += func_592(total);
    total += func_593(total);
    total += func_594(total);
    total += func_595(total);
    total += func_596(total);
    total += func_597(total);
    total += func_598(total);
    total += func_599(total);
    total += func_600(total);
    total += func_601(total);
    total += func_602(total);
    total += func_603(total);
    total += func_604(total);
    total += func_605(total);
    total += func_606(total);
    total += func_607(total);
    total += func_608(total);
    total += func_609(total);
    total += func_610(total);
    total += func_611(total);
    total += func_612(total);
    total += func_613(total);
    total += func_614(total);
    total += func_615(total);
    total += func_616(total);
    total += func_617(total);
    total += func_618(total);
    total += func_619(total);
    total += func_620(total);
    total += func_621(total);
    total += func_622(total);
    total += func_623(total);
    total += func_624(total);
    total += func_625(total);
    total += func_626(total);
    total += func_627(total);
    total += func_628(total);
    total += func_629(total);
    total += func_630(total);
    total += func_631(total);
    total += func_632(total);
    total += func_633(total);
    total += func_634(total);
    total += func_635(total);
    total += func_636(total);
    total += func_637(total);
    total += func_638(total);
    total += func_639(total);
    total += func_640(total);
    total += func_641(total);
    total += func_642(total);
    total += func_643(total);
    total += func_644(total);
    total += func_645(total);
    total += func_646(total);
    total += func_647(total);
    total += func_648(total);
    total += func_649(total);
    total += func_650(total);
    total += func_651(total);
    total += func_652(total);
    total += func_653(total);
    total += func_654(total);
    total += func_655(total);
    total += func_656(total);
    total += func_657(total);
    total += func_658(total);
    total += func_659(total);
    total += func_660(total);
    total += func_661(total);
    total += func_662(total);
    total += func_663(total);
    total += func_664(total);
    total += func_665(total);
    total += func_666(total);
    total += func_667(total);
    total += func_668(total);
    total += func_669(total);
    total += func_670(total);
    total += func_671(total);
    total += func_672(total);
    total += func_673(total);
    total += func_674(total);
    total += func_675(total);
    total += func_676(total);
    total += func_677(total);
    total += func_678(total);
    total += func_679(total);
    total += func_680(total);
    total += func_681(total);
    total += func_682(total);
    total += func_683(total);
    total += func_684(total);
    total += func_685(total);
    total += func_686(total);
    total += func_687(total);
    total += func_688(total);
    total += func_689(total);
    total += func_690(total);
    total += func_691(total);
    total += func_692(total);
    total += func_693(total);
    total += func_694(total);
    total += func_695(total);
    total += func_696(total);
    total += func_697(total);
    total += func_698(total);
    total += func_699(total);
    total += func_700(total);
    total += func_701(total);
    total += func_702(total);
    total += func_703(total);
    total += func_704(total);
    total += func_705(total);
    total += func_706(total);
    total += func_707(total);
    total += func_708(total);
    total += func_709(total);
    total += func_710(total);
    total += func_711(total);
    total += func_712(total);
    total += func_713(total);
    total += func_714(total);
    total += func_715(total);
    total += func_716(total);
    total += func_717(total);
    total += func_718(total);
    total += func_719(total);
    total += func_720(total);
    total += func_721(total);
    total += func_722(total);
    total += func_723(total);
    total += func_724(total);
    total += func_725(total);
    total += func_726(total);
    total += func_727(total);
    total += func_728(total);
    total += func_729(total);
    total += func_730(total);
    total += func_731(total);
    total += func_732(total);
    total += func_733(total);
    total += func_734(total);
    total += func_735(total);
    total += func_736(total);
    total += func_737(total);
    total += func_738(total);
    total += func_739(total);
    total += func_740(total);
    total += func_741(total);
    total += func_742(total);
    total += func_743(total);
    total += func_744(total);
    total += func_745(total);
    total += func_746(total);
    total += func_747(total);
    total += func_748(total);
    total += func_749(total);
    total += func_750(total);
    total += func_751(total);
    total += func_752(total);
    total += func_753(total);
    total += func_754(total);
    total += func_755(total);
    total += func_756(total);
    total += func_757(total);
    total += func_758(total);
    total += func_759(total);
    total += func_760(total);
    total += func_761(total);
    total += func_762(total);
    total += func_763(total);
    total += func_764(total);
    total += func_765(total);
    total += func_766(total);
    total += func_767(total);
    total += func_768(total);
    total += func_769(total);
    total += func_770(total);
    total += func_771(total);
    total += func_772(total);
    total += func_773(total);
    total += func_774(total);
    total += func_775(total);
    total += func_776(total);
    total += func_777(total);
    total += func_778(total);
    total += func_779(total);
    total += func_780(total);
    total += func_781(total);
    total += func_782(total);
    total += func_783(total);
    total += func_784(total);
    total += func_785(total);
    total += func_786(total);
    total += func_787(total);
    total += func_788(total);
    total += func_789(total);
    total += func_790(total);
    total += func_791(total);
    total += func_792(total);
    total += func_793(total);
    total += func_794(total);
    total += func_795(total);
    total += func_796(total);
    total += func_797(total);
    total += func_798(total);
    total += func_799(total);
    total += func_800(total);
    total += func_801(total);
    total += func_802(total);
    total += func_803(total);
    total += func_804(total);
    total += func_805(total);
    total += func_806(total);
    total += func_807(total);
    total += func_808(total);
    total += func_809(total);
    total += func_810(total);
    total += func_811(total);
    total += func_812(total);
    total += func_813(total);
    total += func_814(total);
    total += func_815(total);
    total += func_816(total);
    total += func_817(total);
    total += func_818(total);
    total += func_819(total);
    total += func_820(total);
    total += func_821(total);
    total += func_822(total);
    total += func_823(total);
    total += func_824(total);
    total += func_825(total);
    total += func_826(total);
    total += func_827(total);
    total += func_828(total);
    total += func_829(total);
    total += func_830(total);
    total += func_831(total);
    total += func_832(total);
    total += func_833(total);
    total += func_834(total);
    total += func_835(total);
    total += func_836(total);
    total += func_837(total);
    total += func_838(total);
    total += func_839(total);
    total += func_840(total);
    total += func_841(total);
    total += func_842(total);
    total += func_843(total);
    total += func_844(total);
    total += func_845(total);
    total += func_846(total);
    total += func_847(total);
    total += func_848(total);
    total += func_849(total);
    total += func_850(total);
    total += func_851(total);
    total += func_852(total);
    total += func_853(total);
    total += func_854(total);
    total += func_855(total);
    total += func_856(total);
    total += func_857(total);
    total += func_858(total);
    total += func_859(total);
    total += func_860(total);
    total += func_861(total);
    total += func_862(total);
    total += func_863(total);
    total += func_864(total);
    total += func_865(total);
    total += func_866(total);
    total += func_867(total);
    total += func_868(total);
    total += func_869(total);
    total += func_870(total);
    total += func_871(total);
    total += func_872(total);
    total += func_873(total);
    total += func_874(total);
    total += func_875(total);
    total += func_876(total);
    total += func_877(total);
    total += func_878(total);
    total += func_879(total);
    total += func_880(total);
    total += func_881(total);
    total += func_882(total);
    total += func_883(total);
    total += func_884(total);
    total += func_885(total);
    total += func_886(total);
    total += func_887(total);
    total += func_888(total);
    total += func_889(total);
    total += func_890(total);
    total += func_891(total);
    total += func_892(total);
    total += func_893(total);
    total += func_894(total);
    total += func_895(total);
    total += func_896(total);
    total += func_897(total);
    total += func_898(total);
    total += func_899(total);
    total += func_900(total);
    total += func_901(total);
    total += func_902(total);
    total += func_903(total);
    total += func_904(total);
    total += func_905(total);
    total += func_906(total);
    total += func_907(total);
    total += func_908(total);
    total += func_909(total);
    total += func_910(total);
    total += func_911(total);
    total += func_912(total);
    total += func_913(total);
    total += func_914(total);
    total += func_915(total);
    total += func_916(total);
    total += func_917(total);
    total += func_918(total);
    total += func_919(total);
    total += func_920(total);
    total += func_921(total);
    total += func_922(total);
    total += func_923(total);
    total += func_924(total);
    total += func_925(total);
    total += func_926(total);
    total += func_927(total);
    total += func_928(total);
    total += func_929(total);
    total += func_930(total);
    total += func_931(total);
    total += func_932(total);
    total += func_933(total);
    total += func_934(total);
    total += func_935(total);
    total += func_936(total);
    total += func_937(total);
    total += func_938(total);
    total += func_939(total);
    total += func_940(total);
    total += func_941(total);
    total += func_942(total);
    total += func_943(total);
    total += func_944(total);
    total += func_945(total);
    total += func_946(total);
    total += func_947(total);
    total += func_948(total);
    total += func_949(total);
    total += func_950(total);
    total += func_951(total);
    total += func_952(total);
    total += func_953(total);
    total += func_954(total);
    total += func_955(total);
    total += func_956(total);
    total += func_957(total);
    total += func_958(total);
    total += func_959(total);
    total += func_960(total);
    total += func_961(total);
    total += func_962(total);
    total += func_963(total);
    total += func_964(total);
    total += func_965(total);
    total += func_966(total);
    total += func_967(total);
    total += func_968(total);
    total += func_969(total);
    total += func_970(total);
    total += func_971(total);
    total += func_972(total);
    total += func_973(total);
    total += func_974(total);
    total += func_975(total);
    total += func_976(total);
    total += func_977(total);
    total += func_978(total);
    total += func_979(total);
    total += func_980(total);
    total += func_981(total);
    total += func_982(total);
    total += func_983(total);
    total += func_984(total);
    total += func_985(total);
    total += func_986(total);
    total += func_987(total);
    total += func_988(total);
    total += func_989(total);
    total += func_990(total);
    total += func_991(total);
    total += func_992(total);
    total += func_993(total);
    total += func_994(total);
    total += func_995(total);
    total += func_996(total);
    total += func_997(total);
    total += func_998(total);
    total += func_999(total);
    total += func_1000(total);
    total += func_1001(total);
    total += func_1002(total);
    total += func_1003(total);
    total += func_1004(total);
    total += func_1005(total);
    total += func_1006(total);
    total += func_1007(total);
    total += func_1008(total);
    total += func_1009(total);
    total += func_1010(total);
    total += func_1011(total);
    total += func_1012(total);
    total += func_1013(total);
    total += func_1014(total);
    total += func_1015(total);
    total += func_1016(total);
    total += func_1017(total);
    total += func_1018(total);
    total += func_1019(total);
    total += func_1020(total);
    total += func_1021(total);
    total += func_1022(total);
    total += func_1023(total);
    total += func_1024(total);
    total += func_1025(total);
    total += func_1026(total);
    total += func_1027(total);
    total += func_1028(total);
    total += func_1029(total);
    total += func_1030(total);
    total += func_1031(total);
    total += func_1032(total);
    total += func_1033(total);
    total += func_1034(total);
    total += func_1035(total);
    total += func_1036(total);
    total += func_1037(total);
    total += func_1038(total);
    total += func_1039(total);
    total += func_1040(total);
    total += func_1041(total);
    total += func_1042(total);
    total += func_1043(total);
    total += func_1044(total);
    total += func_1045(total);
    total += func_1046(total);
    total += func_1047(total);
    total += func_1048(total);
    total += func_1049(total);
    total += func_1050(total);
    total += func_1051(total);
    total += func_1052(total);
    total += func_1053(total);
    total += func_1054(total);
    total += func_1055(total);
    total += func_1056(total);
    total += func_1057(total);
    total += func_1058(total);
    total += func_1059(total);
    total += func_1060(total);
    total += func_1061(total);
    total += func_1062(total);
    total += func_1063(total);
    total += func_1064(total);
    total += func_1065(total);
    total += func_1066(total);
    total += func_1067(total);
    total += func_1068(total);
    total += func_1069(total);
    total += func_1070(total);
    total += func_1071(total);
    total += func_1072(total);
    total += func_1073(total);
    total += func_1074(total);
    total += func_1075(total);
    total += func_1076(total);
    total += func_1077(total);
    total += func_1078(total);
    total += func_1079(total);
    total += func_1080(total);
    total += func_1081(total);
    total += func_1082(total);
    total += func_1083(total);
    total += func_1084(total);
    total += func_1085(total);
    total += func_1086(total);
    total += func_1087(total);
    total += func_1088(total);
    total += func_1089(total);
    total += func_1090(total);
    total += func_1091(total);
    total += func_1092(total);
    total += func_1093(total);
    total += func_1094(total);
    total += func_1095(total);
    total += func_1096(total);
    total += func_1097(total);
    total += func_1098(total);
    total += func_1099(total);
    total += func_1100(total);
    total += func_1101(total);
    total += func_1102(total);
    total += func_1103(total);
    total += func_1104(total);
    total += func_1105(total);
    total += func_1106(total);
    total += func_1107(total);
    total += func_1108(total);
    total += func_1109(total);
    total += func_1110(total);
    total += func_1111(total);
    total += func_1112(total);
    total += func_1113(total);
    total += func_1114(total);
    total += func_1115(total);
    total += func_1116(total);
    total += func_1117(total);
    total += func_1118(total);
    total += func_1119(total);
    total += func_1120(total);
    total += func_1121(total);
    total += func_1122(total);
    total += func_1123(total);
    total += func_1124(total);
    total += func_1125(total);
    total += func_1126(total);
    total += func_1127(total);
    total += func_1128(total);
    total += func_1129(total);
    total += func_1130(total);
    total += func_1131(total);
    total += func_1132(total);
    total += func_1133(total);
    total += func_1134(total);
    total += func_1135(total);
    total += func_1136(total);
    total += func_1137(total);
    total += func_1138(total);
    total += func_1139(total);
    total += func_1140(total);
    total += func_1141(total);
    total += func_1142(total);
    total += func_1143(total);
    total += func_1144(total);
    total += func_1145(total);
    total += func_1146(total);
    total += func_1147(total);
    total += func_1148(total);
    total += func_1149(total);
    total += func_1150(total);
    total += func_1151(total);
    total += func_1152(total);
    total += func_1153(total);
    total += func_1154(total);
    total += func_1155(total);
    total += func_1156(total);
    total += func_1157(total);
    total += func_1158(total);
    total += func_1159(total);
    total += func_1160(total);
    total += func_1161(total);
    total += func_1162(total);
    total += func_1163(total);
    total += func_1164(total);
    total += func_1165(total);
    total += func_1166(total);
    total += func_1167(total);
    total += func_1168(total);
    total += func_1169(total);
    total += func_1170(total);
    total += func_1171(total);
    total += func_1172(total);
    total += func_1173(total);
    total += func_1174(total);
    total += func_1175(total);
    total += func_1176(total);
    total += func_1177(total);
    total += func_1178(total);
    total += func_1179(total);
    total += func_1180(total);
    total += func_1181(total);
    total += func_1182(total);
    total += func_1183(total);
    total += func_1184(total);
    total += func_1185(total);
    total += func_1186(total);
    total += func_1187(total);
    total += func_1188(total);
    total += func_1189(total);
    total += func_1190(total);
    total += func_1191(total);
    total += func_1192(total);
    total += func_1193(total);
    total += func_1194(total);
    total += func_1195(total);
    total += func_1196(total);
    total += func_1197(total);
    total += func_1198(total);
    total += func_1199(total);
    total += func_1200(total);
    total += func_1201(total);
    total += func_1202(total);
    total += func_1203(total);
    total += func_1204(total);
    total += func_1205(total);
    total += func_1206(total);
    total += func_1207(total);
    total += func_1208(total);
    total += func_1209(total);
    total += func_1210(total);
    total += func_1211(total);
    total += func_1212(total);
    total += func_1213(total);
    total += func_1214(total);
    total += func_1215(total);
    total += func_1216(total);
    total += func_1217(total);
    total += func_1218(total);
    total += func_1219(total);
    total += func_1220(total);
    total += func_1221(total);
    total += func_1222(total);
    total += func_1223(total);
    total += func_1224(total);
    total += func_1225(total);
    total += func_1226(total);
    total += func_1227(total);
    total += func_1228(total);
    total += func_1229(total);
    total += func_1230(total);
    total += func_1231(total);
    total += func_1232(total);
    total += func_1233(total);
    total += func_1234(total);
    total += func_1235(total);
    total += func_1236(total);
    total += func_1237(total);
    total += func_1238(total);
    total += func_1239(total);
    total += func_1240(total);
    total += func_1241(total);
    total += func_1242(total);
    total += func_1243(total);
    total += func_1244(total);
    total += func_1245(total);
    total += func_1246(total);
    total += func_1247(total);
    total += func_1248(total);
    total += func_1249(total);
    total += func_1250(total);
    total += func_1251(total);
    total += func_1252(total);
    total += func_1253(total);
    total += func_1254(total);
    total += func_1255(total);
    total += func_1256(total);
    total += func_1257(total);
    total += func_1258(total);
    total += func_1259(total);
    total += func_1260(total);
    total += func_1261(total);
    total += func_1262(total);
    total += func_1263(total);
    total += func_1264(total);
    total += func_1265(total);
    total += func_1266(total);
    total += func_1267(total);
    total += func_1268(total);
    total += func_1269(total);
    total += func_1270(total);
    total += func_1271(total);
    total += func_1272(total);
    total += func_1273(total);
    total += func_1274(total);
    total += func_1275(total);
    total += func_1276(total);
    total += func_1277(total);
    total += func_1278(total);
    total += func_1279(total);
    total += func_1280(total);
    total += func_1281(total);
    total += func_1282(total);
    total += func_1283(total);
    total += func_1284(total);
    total += func_1285(total);
    total += func_1286(total);
    total += func_1287(total);
    total += func_1288(total);
    total += func_1289(total);
    total += func_1290(total);
    total += func_1291(total);
    total += func_1292(total);
    total += func_1293(total);
    total += func_1294(total);
    total += func_1295(total);
    total += func_1296(total);
    total += func_1297(total);
    total += func_1298(total);
    total += func_1299(total);
    total += func_1300(total);
    total += func_1301(total);
    total += func_1302(total);
    total += func_1303(total);
    total += func_1304(total);
    total += func_1305(total);
    total += func_1306(total);
    total += func_1307(total);
    total += func_1308(total);
    total += func_1309(total);
    total += func_1310(total);
    total += func_1311(total);
    total += func_1312(total);
    total += func_1313(total);
    total += func_1314(total);
    total += func_1315(total);
    total += func_1316(total);
    total += func_1317(total);
    total += func_1318(total);
    total += func_1319(total);
    total += func_1320(total);
    total += func_1321(total);
    total += func_1322(total);
    total += func_1323(total);
    total += func_1324(total);
    total += func_1325(total);
    total += func_1326(total);
    total += func_1327(total);
    total += func_1328(total);
    total += func_1329(total);
    total += func_1330(total);
    total += func_1331(total);
    total += func_1332(total);
    total += func_1333(total);
    total += func_1334(total);
    total += func_1335(total);
    total += func_1336(total);
    total += func_1337(total);
    total += func_1338(total);
    total += func_1339(total);
    total += func_1340(total);
    total += func_1341(total);
    total += func_1342(total);
    total += func_1343(total);
    total += func_1344(total);
    total += func_1345(total);
    total += func_1346(total);
    total += func_1347(total);
    total += func_1348(total);
    total += func_1349(total);
    total += func_1350(total);
    total += func_1351(total);
    total += func_1352(total);
    total += func_1353(total);
    total += func_1354(total);
    total += func_1355(total);
    total += func_1356(total);
    total += func_1357(total);
    total += func_1358(total);
    total += func_1359(total);
    total += func_1360(total);
    total += func_1361(total);
    total += func_1362(total);
    total += func_1363(total);
    total += func_1364(total);
    total += func_1365(total);
    total += func_1366(total);
    total += func_1367(total);
    total += func_1368(total);
    total += func_1369(total);
    total += func_1370(total);
    total += func_1371(total);
    total += func_1372(total);
    total += func_1373(total);
    total += func_1374(total);
    total += func_1375(total);
    total += func_1376(total);
    total += func_1377(total);
    total += func_1378(total);
    total += func_1379(total);
    total += func_1380(total);
    total += func_1381(total);
    total += func_1382(total);
    total += func_1383(total);
    total += func_1384(total);
    total += func_1385(total);
    total += func_1386(total);
    total += func_1387(total);
    total += func_1388(total);
    total += func_1389(total);
    total += func_1390(total);
    total += func_1391(total);
    total += func_1392(total);
    total += func_1393(total);
    total += func_1394(total);
    total += func_1395(total);
    total += func_1396(total);
    total += func_1397(total);
    total += func_1398(total);
    total += func_1399(total);
    total += func_1400(total);
    total += func_1401(total);
    total += func_1402(total);
    total += func_1403(total);
    total += func_1404(total);
    total += func_1405(total);
    total += func_1406(total);
    total += func_1407(total);
    total += func_1408(total);
    total += func_1409(total);
    total += func_1410(total);
    total += func_1411(total);
    total += func_1412(total);
    total += func_1413(total);
    total += func_1414(total);
    total += func_1415(total);
    total += func_1416(total);
    total += func_1417(total);
    total += func_1418(total);
    total += func_1419(total);
    total += func_1420(total);
    total += func_1421(total);
    total += func_1422(total);
    total += func_1423(total);
    total += func_1424(total);
    total += func_1425(total);
    total += func_1426(total);
    total += func_1427(total);
    total += func_1428(total);
    total += func_1429(total);
    total += func_1430(total);
    total += func_1431(total);
    total += func_1432(total);
    total += func_1433(total);
    total += func_1434(total);
    total += func_1435(total);
    total += func_1436(total);
    total += func_1437(total);
    total += func_1438(total);
    total += func_1439(total);
    total += func_1440(total);
    total += func_1441(total);
    total += func_1442(total);
    total += func_1443(total);
    total += func_1444(total);
    total += func_1445(total);
    total += func_1446(total);
    total += func_1447(total);
    total += func_1448(total);
    total += func_1449(total);
    total += func_1450(total);
    total += func_1451(total);
    total += func_1452(total);
    total += func_1453(total);
    total += func_1454(total);
    total += func_1455(total);
    total += func_1456(total);
    total += func_1457(total);
    total += func_1458(total);
    total += func_1459(total);
    total += func_1460(total);
    total += func_1461(total);
    total += func_1462(total);
    total += func_1463(total);
    total += func_1464(total);
    total += func_1465(total);
    total += func_1466(total);
    total += func_1467(total);
    total += func_1468(total);
    total += func_1469(total);
    total += func_1470(total);
    total += func_1471(total);
    total += func_1472(total);
    total += func_1473(total);
    total += func_1474(total);
    total += func_1475(total);
    total += func_1476(total);
    total += func_1477(total);
    total += func_1478(total);
    total += func_1479(total);
    total += func_1480(total);
    total += func_1481(total);
    total += func_1482(total);
    total += func_1483(total);
    total += func_1484(total);
    total += func_1485(total);
    total += func_1486(total);
    total += func_1487(total);
    total += func_1488(total);
    total += func_1489(total);
    total += func_1490(total);
    total += func_1491(total);
    total += func_1492(total);
    total += func_1493(total);
    total += func_1494(total);
    total += func_1495(total);
    total += func_1496(total);
    total += func_1497(total);
    total += func_1498(total);
    total += func_1499(total);
    total += func_1500(total);
    total += func_1501(total);
    total += func_1502(total);
    total += func_1503(total);
    total += func_1504(total);
    total += func_1505(total);
    total += func_1506(total);
    total += func_1507(total);
    total += func_1508(total);
    total += func_1509(total);
    total += func_1510(total);
    printf("%u\n", total);
    return 0;
}

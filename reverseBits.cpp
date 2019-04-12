//
// Created by Zhou Yitao on 2019-03-03.
//
#include "Solution.h"

uint32_t Solution::reverseBits(uint32_t n) {
    if (n == 0) return 0;
    uint32_t res = 0;
    for (int i = 0; i < 32; i++) {
        res = res << 1;
        if ((n & 1) == 1) res++;
        n = n >> 1;
    }
    return res;
}
//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

int Solution::digitCount(int num) {
    int count = 0;

    int number = num;

    while (num != 0) {
        num /= 10;
        count++;
    }
    return number % count;
}
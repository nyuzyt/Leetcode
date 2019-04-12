//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

void Solution::replaceValues(vector<int> &arr) {
    int i, j, len = arr.size();
    if (len % 2 == 0) {
        for (i = 0; i < len; i++) {
            arr[i] = 1;
        }
    } else {
        for (j = 0; j < len; j++) {
            arr[j] = 0;
        }
    }
}
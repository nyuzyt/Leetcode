//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

void Solution::reverseArray(vector<int> &arr) {
    int i, temp, originalLen = arr.size();
    int len = originalLen;
    for (i = 0; i < originalLen / 2; i++) {
        temp = arr[len - i - 1];
        arr[len - i - 1] = arr[i];
        arr[i] = temp;
    }
}
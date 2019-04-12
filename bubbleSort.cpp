//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

void Solution::bubbleSort(vector<int>& arr) {
    int len = arr.size();
    int small, os, i, j, temp;
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            temp = 0;
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
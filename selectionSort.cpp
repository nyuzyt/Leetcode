//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

void Solution::selectionSort(vector<int> &arr) {
    int len = arr.size();
    for (int x = 0; x < len; x++) {
        int index_of_min = x;
        for (int y = x + 1; y < len; y++) {
            if (arr[index_of_min] > arr[y]) {
                index_of_min = y;
            }
        }
        int temp = arr[x];
        arr[x] = arr[index_of_min];
        arr[index_of_min] = temp;
    }
}
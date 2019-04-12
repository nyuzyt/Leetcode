//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

void Solution::insertionSort(vector<int> &arr) {
    int i, max, location, j, temp, len = arr.size();
    for (i = 0; i < len; i++) {
        max = arr[i];
        location = i;
        for (j = i + 1; j < len; j++) {
            if (max < arr[j]) {
                max = arr[j];
                location = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[location];
        arr[location] = temp;
    }
}
/*
void Solution::insertionSort(vector<int> &arr) {
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            int temp = arr[i];
            int j = i;
            while (j > 0 && arr[j - 1] > temp) {
                arr[j] = arr[j - 1];
                j--;
            }
            arr[j] = temp;
        }
    }
}
 */

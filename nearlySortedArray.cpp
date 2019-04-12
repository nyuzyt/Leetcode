//
// Created by Zhou Yitao on 2019-04-11.
//

#include "Solution.h"

void Solution::nearlySortedArray(vector<int> &input) {
    for (int i = 1; i < input.size(); i++) {
        int key = input[i];
        int j = i - 1;
        while (j >= 0 && input[j] > key) {
            input[j + 1] = input[j];
            j--;
        }
        input[j + 1] = key;
    }
}
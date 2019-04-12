//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

vector<int> Solution::removeElement(vector<int> arr, int index) {
    int i, j, len = arr.size();
    if (index < len) {
        for (i = index; i < len - 1; i++) {
            arr[i] = arr[i + 1];
        }
        vector<int> res;
        for (int i = 0; i < len - 1; i++)
            res.push_back(arr[i]);
        return res;
    } else
        return arr;
}
//
// Created by Zhou Yitao on 2019-04-05.
//

#include "Solution.h"

vector<int> Solution::manchester(vector<int> arr) {
    bool result;
    int i;
    vector<int> output(arr.size(), 0);
    if (arr.size() == 0 || arr.size() == 1)
        return output;
    for (i = arr.size() - 1; i > 0; i--) {
        result = (arr[i] != arr[i - 1]);
        output[i] = result ? 1 : 0;
    }
    return output;
}
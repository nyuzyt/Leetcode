//
// Created by Zhou Yitao on 2018/11/16.
//
#include "Solution.h"

string Solution::getPermutation(int n, int k) {
    vector<int> digits;
    for (int i = 1; i <= n; i++)
        digits.push_back(i);
    vector<int> factor(n);
    factor[0] = 1;
    for (int i = 1; i < n; i++)
        factor[i] = factor[i-1] * i;
    k = k - 1;
    string res;
    for (int i = n - 1; i >= 0; i--) {
        int index = k / factor[i];
        k = k % factor[i];
        res += to_string(digits[index]);
        digits.erase(digits.begin() + index);
    }
    return res;
}

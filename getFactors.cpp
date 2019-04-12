//
// Created by Zhou Yitao on 2018/11/16.
//
#include "Solution.h"

void helper(vector<vector<int>>& res, vector<int> tmp, int n, int start) {
    if (n == 1) {
        res.push_back(tmp);
        return;
    }
    if (n < start)
        return;
    for (int i = start; i <= n; i++) {
        if (n % i == 0) {
            tmp.push_back(start);
            helper(res, tmp, n / i, start);
            tmp.pop_back();
        }
    }
}

vector<vector<int>> Solution::getFactors(int n) {
    vector<vector<int>> res;
    vector<int> tmp;
    if (n == 1) return res;
    helper(res, tmp, n, 2);
    return res;
}



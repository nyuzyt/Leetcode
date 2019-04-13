//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

void dfs(vector<vector<int>>& matrix, int& maxVal, int minVal, int i, int j) {
    int m = matrix.size(), n = matrix[0].size();

    if (i == m || j == n)
        return;
    minVal = min(minVal, matrix[i][j]);
    if (i == m - 1 && j == n - 1)
        maxVal = max(maxVal, minVal);
    dfs(matrix, maxVal, minVal, i + 1, j);
    dfs(matrix, maxVal, minVal, i, j + 1);
}

int Solution::maxMinPathdfs(vector<vector<int>> matrix) {
    if (matrix.empty() || matrix[0].empty())
        return 0;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    dfs(matrix, maxVal, minVal, 0, 0);
    return maxVal;
}

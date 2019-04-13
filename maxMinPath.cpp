//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

int Solution::maxMinPath(vector<vector<int>> matrix) {
    if (matrix.empty() || matrix[0].empty())
        return 0;
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));
    dp[0][0] = matrix[0][0];
    for (int i = 1; i < m; i++) {
        dp[i][0] = min(matrix[i][0], dp[i - 1][0]);
    }
    for (int i = 1; i < n; i++) {
        dp[0][i] = min(matrix[0][i], dp[0][i - 1]);
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = min(max(dp[i - 1][j], dp[i][j - 1]), matrix[i][j]);
        }
    }
    return dp[m - 1][n - 1];
}
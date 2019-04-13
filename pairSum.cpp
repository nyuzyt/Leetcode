//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

vector<pair<int, int>> Solution::pairSum(int maxDist,
        vector<pair<int, int>> forward, vector<pair<int, int>> backward) {
    int curMax;
    vector<pair<int,int>> res;
    sort(forward.begin(), forward.end());
    sort(backward.begin(), backward.end());
    for (auto pair1: forward) {
        for (auto pair2: backward) {
            if (pair1.second + pair2.second > maxDist)
                break;
            if (pair1.second + pair2.second == curMax)
                res.push_back({pair1.first, pair2.first});
            else if (pair1.second + pair2.second > curMax) {
                res.clear();
                curMax = pair1.second + pair2.second;
                res.push_back({pair1.first, pair2.first});
            }
        }
    }
    return res;
}
//
// Created by Zhou Yitao on 2019-04-14.
//

#include "Solution.h"

vector<pair<int, int>> Solution::pairSumTwoPtr(int maxDist,
        vector<pair<int, int>> forward, vector<pair<int, int>> backward) {
    vector<pair<int,int>> res;
    int curMax = 0, low = 0, high = backward.size() - 1;
    while (low < forward.size() && high >= 0) {
        while (high >= 0 && forward[low].second + backward[high].second > maxDist)
            high--;
        while (low < forward.size() && forward[low].second + backward[high].second <= maxDist) {
            if (forward[low].second + backward[high].second > curMax) {
                curMax = forward[low].second + backward[high].second;
                res.clear();
                res.emplace_back(forward[low].first, backward[high].first);
            } else if (forward[low].second + backward[high].second == curMax) {
                res.emplace_back(forward[low].first, backward[high].first);
            }
            low++;
        }
    }
    return res;
}

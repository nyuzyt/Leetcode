//
// Created by Zhou Yitao on 2019-04-12.
//

#include "Solution.h"

pair<int, int> Solution::truck(vector<int> v, int target) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < v.size(); i++) {
        pairs.push_back(make_pair(v[i], i));
    }
    sort(pairs.begin(), pairs.end());
    int low = 0, high = pairs.size() - 1;
    pair<int, int> res;
    int max = 0;
    while (low < high) {
        while (pairs[low].first + pairs[high].first > target)
            high--;
        if (pairs[low].first + pairs[high].first > max) {
            max = pairs[low].first + pairs[high].first;
            res = {pairs[low].second, pairs[high].second};
        }
        low++;
    }
    return res;
}
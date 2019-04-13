//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

map<int, double> Solution::highFive(vector<pair<int,int>> records) {
    map<int, multiset<int>> count;
    map<int, double> res;
    for (auto record: records) {
        count[record.first].insert(record.second);
    }
    for (auto c: count) {
        int sum = 0;
        int index = 0;
        auto end = next(c.second.rbegin(), 5);
        for (auto it = c.second.rbegin(); it != end; it++) {
            sum += *it;
        }
        res[c.first] = sum * 1.0 / 5;
    }
    return res;
};

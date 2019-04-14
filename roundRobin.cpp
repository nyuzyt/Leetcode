//
// Created by Zhou Yitao on 2019-04-13.
//
#include "Solution.h"

double Solution::roundRobin(vector<int> arrives, vector<int> executions, int q) {
    if (arrives.empty() || executions.empty() || arrives.size() != executions.size())
        return 0;
    queue<pair<int, int>> tasks;
    int index = 0, curTime = 0, waitTime = 0;
    int size = arrives.size();
    while (!tasks.empty() || index < size) {
        if (!tasks.empty()) {
            auto cur = tasks.front();
            tasks.pop();
            waitTime += curTime - cur.first;
            curTime += min(cur.second, q);
            for (; index < size && arrives[index] <= curTime; index++) {
                tasks.push(make_pair(arrives[index], executions[index]));
            }
            if (cur.second > q)
                tasks.push(make_pair(curTime, cur.second - q));
        } else {
            tasks.push(make_pair(arrives[index], executions[index]));
            curTime = arrives[index++];
        }
    }
    return waitTime * 1.0 / arrives.size();
}

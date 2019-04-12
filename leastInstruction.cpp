//
// Created by Zhou Yitao on 2019-04-01.
//

#include "Solution.h"

int Solution::leastInstruction(int target) {
    if (target == 1)
        return 0;
    set<int> visited;
    queue<int> q;
    q.push(1);
    int level = 0;
    while(true) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            int tmp = q.front();
            q.pop();
            if (visited.find(tmp) != visited.end())
                continue;
            if (tmp == target)
                return level;
            visited.insert(tmp);
            q.push(tmp * 2);
            q.push(tmp / 3);
        }
        level++;
    }
}

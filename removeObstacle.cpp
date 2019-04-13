//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

int Solution::removeObstacle(vector<vector<int>> maze) {
    if (maze.empty() || maze[0].empty())
        return -1;
    int m = maze.size(), n = maze[0].size();
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    int step = 0;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if (maze[x][y] == 9)
                return step;
            if (maze[x][y] == -1 || maze[x][y] == 0)
                continue;
            maze[x][y] = -1;
            if (x - 1 >= 0) q.push({x - 1, y});
            if (y - 1 >= 0) q.push({x, y - 1});
            if (x + 1 < m) q.push({x + 1, y});
            if (y + 1 < n) q.push({x, y + 1});
        }
        step++;
    }
    return -1;
}
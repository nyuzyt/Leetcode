//
// Created by Zhou Yitao on 2019-04-14.
//

#include "Solution.h"

int bfs(int i, int j, int x, int y, vector<vector<int>> fields) {
    int step = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(i, j));
    while (!q.empty()) {
        int size = q.size();
        for (int k = 0; k < size; k++) {
            auto tmp = q.front();
            q.pop();
            int tmpx = tmp.first;
            int tmpy = tmp.second;
            if (tmpx == x && tmpy == y)
                return step;
            if (fields[tmpx][tmpy] != 1)
                continue;
            if (tmpx - 1 >= 0) q.push(make_pair(tmpx - 1, tmpy));
            if (tmpx + 1 < fields.size()) q.push(make_pair(tmpx + 1, tmpy));
            if (tmpy - 1 >= 0) q.push(make_pair(tmpx, tmpy - 1));
            if (tmpy + 1 < fields[0].size()) q.push(make_pair(tmpx, tmpy + 1));
            fields[tmpx][tmpy] = -1;
        }
        step++;
    }
    return -1;
}

int Solution::flatGolfFields(vector<vector<int>> fields) {
    if (fields.empty() || fields[0].empty())
        return -1;
    auto comp = [&](pair<int, int> p1, pair<int, int> p2)
        {return fields[p1.first][p1.second] > fields[p2.first][p2.second]; };

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq(comp);

    int m = fields.size(), n = fields[0].size();
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            pq.push({i, j});
        }

    while (fields[pq.top().first][pq.top().second] <= 1)
        pq.pop();

    int i = 0, j = 0, res = 0;
    cout << pq.size() << endl;
    while (!pq.empty()) {
        auto tmp = pq.top();
        pq.pop();
        int x = tmp.first;
        int y = tmp.second;
        int cost = bfs(i, j, x, y, fields);
        if (cost == -1) return -1;
        res += cost + fields[x][y];
        fields[x][y] = 1;
        i = x; j = y;
    }
    return res;
}

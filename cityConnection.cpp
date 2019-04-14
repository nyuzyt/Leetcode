//
// Created by Zhou Yitao on 2019-04-14.
//

#include "Solution.h"

int findParent(int num, map<int, int>& parent) {
    if (parent[num] == num)
        return num;
    parent[num] = findParent(parent[num], parent);
    return parent[num];
}

int Solution::cityConnection(int cities, int roads, vector<pair<int, int>> availableRoads
        , int constructs, vector<vector<int>> constructRoads) {
    map<int, int> parent;
    for (auto road: availableRoads) {
        if (!parent.count(road.first) && !parent.count(road.second)) {
            parent[road.second] = road.first;
            parent[road.first] = road.first;
            cities--;
        } else if (!parent.count(road.first)) {
            parent[road.first] = road.second;
            cities--;
        } else if (!parent.count(road.second)) {
            parent[road.second] = road.first;
            cities--;
        } else if (findParent(road.first, parent) != findParent(road.second, parent)) {
            parent[road.second] = road.first;
            cities--;
        }
    }

    int cost = 0;
    auto comp = [](vector<int> a, vector<int> b) {return a[2] < b[2]; };
    sort(constructRoads.begin(), constructRoads.end(), comp);
    for (int i = 0; i < constructs && cities > 1; i++) {
        int x = constructRoads[i][0], y = constructRoads[i][1];
        if (findParent(x, parent) == findParent(y, parent))
            continue;
        if (!parent.count(x) && !parent.count(y)) {
            parent[x] = x;
            parent[y] = x;
        } else if (!parent.count(x)) {
            parent[x] = y;
        } else if (!parent.count(y)) {
            parent[y] = x;
        } else if (findParent(x, parent) != findParent(y, parent)) {
            parent[x] = y;
        }
        cost += constructRoads[i][2];
        cities--;
    }
    return cost;
}
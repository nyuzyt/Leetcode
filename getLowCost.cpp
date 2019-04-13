//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

string findParent(string node, map<string, string>& parent) {
    if (parent[node] == node)
        return node;
    parent[node] = findParent(parent[node], parent);
    return parent[node];
}

vector<Connection> Solution::getLowCost(vector<Connection> connections) {
    vector<Connection> res;
    if (connections.empty()) return res;
    auto comp = [](Connection c1, Connection c2) {return c1.cost < c2.cost; };
    sort(connections.begin(), connections.end(), comp);
    map<string, string> parent;
    for (const auto& connection: connections) {
        if (!parent.count(connection.node1) && !parent.count(connection.node2)) {
            parent[connection.node2] = connection.node1;
            parent[connection.node1] = connection.node1;
            res.push_back(connection);
        } else if (!parent.count(connection.node1)) {
            parent[connection.node1] = findParent(connection.node2, parent);
            res.push_back(connection);
        } else if (!parent.count(connection.node2)) {
            parent[connection.node2] = findParent(connection.node1, parent);
            res.push_back(connection);
        } else {
            if (findParent(connection.node1, parent) != findParent(connection.node2, parent)) {
                string parent1 = findParent(connection.node1, parent);
                string parent2 = findParent(connection.node2, parent);
                parent[parent1] = parent2;
                res.push_back(connection);
            }
        }
    }
    auto order = [](Connection c1, Connection c2) {
        return (c1.node1 == c2.node1) ? (c1.node2 < c2.node2) : (c1.node1 < c2.node1); };
    sort(res.begin(), res.end(), order);
    return res;
}
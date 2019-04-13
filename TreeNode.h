//
// Created by Zhou Yitao on 2019-04-12.
//

#ifndef LEETCODE_TREENODE_H
#define LEETCODE_TREENODE_H

#include <vector>
#include <queue>
using namespace std;

class TreeNode {
    public:
        int val;
        TreeNode *left, *right;
        TreeNode(int val);
        TreeNode(vector<int> array);
};


#endif //LEETCODE_TREENODE_H

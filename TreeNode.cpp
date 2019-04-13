//
// Created by Zhou Yitao on 2019-04-12.
//

#include "TreeNode.h"

TreeNode::TreeNode(int val):val(val) {
    this->left = nullptr;
    this->right = nullptr;
}

TreeNode::TreeNode(vector<int> array) {
    if (array.size() == 0)
        return;
    this->val = array[0];
    queue<TreeNode*> q;
    q.push(this);
    int index = 1;
    while(index < array.size()) {
        TreeNode* tmp = q.front();
        q.pop();
        TreeNode* left = new TreeNode(array[index++]);
        tmp->left = left;
        q.push(left);
        if (index < array.size()) {
            TreeNode* right = new TreeNode(array[index++]);
            tmp->right = right;
            q.push(right);
        }
    }
}
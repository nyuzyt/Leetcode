//
// Created by Zhou Yitao on 2019-04-12.
//

#include "Solution.h"

struct Node {
    TreeNode* root;
    int sum;
    int numOfNodes;
    Node(TreeNode* root = nullptr, int sum = 0, int numOfNodes = 0):root(root),
        sum(sum), numOfNodes(numOfNodes) {}
};

Node* helper(TreeNode *root, Node*& res) {
    if (root == nullptr) return new Node();
    Node* left = helper(root->left, res);
    Node* right = helper(root->right, res);
    int sum = root->val + left->sum + right->sum;
    int count = 1 + left->numOfNodes + right->numOfNodes;
    if (sum * 1.0 / count > res->sum * 1.0 / res->numOfNodes) {
        res->root = root;
        res->sum = sum;
        res->numOfNodes = count;
    }
    return new Node(root, sum, count);
}

TreeNode* Solution::findMaxAverageSubtree(TreeNode *root) {
    Node* res = new Node(root, 0, 1);
    helper(root, res);
    return res->root;
}
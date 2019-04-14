//
// Created by Zhou Yitao on 2019-04-14.
//

#include "Solution.h"

TreeNode* buildTree(vector<int> nums, int low, int high) {
    if (low > high)
        return nullptr;
    if (low == high)
        return new TreeNode(nums[low]);
    int mid = (high - low) / 2 + low;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = buildTree(nums, low, mid - 1);
    root->right = buildTree(nums, mid + 1, high);
    return root;
}

TreeNode* findLCA(TreeNode* root, int num1, int num2) {
    if (!root)
        return nullptr;
    if (root->val == num1 || root->val == num2)
        return root;
    if (root->val > max(num1, num2))
        return findLCA(root->left, num1, num2);
    if (root->val < min(num1, num2))
        return findLCA(root->right, num1, num2);
    return root;
}

int getDist(TreeNode* root, int num) {
    if (root->val == num)
        return 0;
    else if (root->val < num)
        return getDist(root->right, num) + 1;
    else
        return getDist(root->left, num) + 1;
}

void printTree(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            auto tmp = q.front();
            q.pop();
            cout << tmp->val << " ";
            if (tmp->left) q.push(tmp->left);
            if (tmp->right) q.push(tmp->right);
        }
        cout << endl;
    }
}

int Solution::findDistInBST(vector<int> nums, int num1, int num2) {
    sort(nums.begin(), nums.end());
    TreeNode* root = buildTree(nums, 0, nums.size() - 1);

    // print out the tree
    printTree(root);

    TreeNode* lca = findLCA(root, num1, num2);
    int dis1 = getDist(lca, num1);
    int dis2 = getDist(lca, num2);
    return dis1 + dis2;
}
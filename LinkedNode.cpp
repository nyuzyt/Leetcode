//
// Created by Zhou Yitao on 2019-04-13.
//

#include "LinkedNode.h"

LinkedNode::LinkedNode() {
}

LinkedNode::LinkedNode(int val, LinkedNode* prev = nullptr, LinkedNode* next = nullptr) {
    this->val = val;
    this->prev = prev;
    this->next = next;
}

LinkedNode::LinkedNode(vector<int> nums) {
    this->val = nums[0];
    LinkedNode* tmp = this;
    for (int i = 1; i < nums.size(); i++) {
        tmp->next = new LinkedNode(nums[i]);
        tmp = tmp->next;
    }
}
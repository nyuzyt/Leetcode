//
// Created by Zhou Yitao on 2019-04-13.
//

#ifndef LEETCODE_LINKEDNODE_H
#define LEETCODE_LINKEDNODE_H

#include <vector>
using namespace std;

class LinkedNode {
public:
    int val;
    LinkedNode* prev;
    LinkedNode* next;
    LinkedNode();
    LinkedNode(int, LinkedNode*, LinkedNode*);
    LinkedNode(vector<int>);
};


#endif //LEETCODE_LINKEDNODE_H

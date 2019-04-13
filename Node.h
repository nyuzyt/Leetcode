//
// Created by Zhou Yitao on 2019-04-13.
//

#ifndef LEETCODE_NODE_H
#define LEETCODE_NODE_H


class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node();
    Node(int, Node*, Node*);
};


#endif //LEETCODE_NODE_H

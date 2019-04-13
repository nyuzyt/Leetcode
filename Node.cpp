//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Node.h"

Node::Node() {
}

Node::Node(int val, Node* prev = nullptr, Node* next = nullptr) {
    this->val = val;
    this->prev = prev;
    this->next = next;
}
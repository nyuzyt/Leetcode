//
// Created by Zhou Yitao on 2019-04-13.
//

#include "Solution.h"

LinkedNode* Solution::reverse2ndHalf(LinkedNode *head) {
    if (!head || !head->next)
        return head;
    LinkedNode* slow = head;
    LinkedNode* fast = head->next;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    LinkedNode* prev = NULL, *cur = slow->next;
    while (cur) {
        LinkedNode* tmp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = tmp;
    }
    slow->next = prev;
    return head;
}
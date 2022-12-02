#pragma once
#include "DataStructure.h"

class Solution160 {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* pa = headA;
        ListNode* pb = headB;

        while (pa != pb) {
            if (!pa) {
                pa = headB;
            }
            else {
                pa = pa->next;
            }
            if (!pb) {
                pb = headA;
            }
            else {
                pb = pb->next;
            }
        }
        return pa;
    }
};
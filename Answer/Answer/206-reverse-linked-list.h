#pragma once
#include "DataStructure.h"

class Solution206 {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return head;

        ListNode* next = head->next;
        head->next = nullptr;

        while (next != nullptr) {
            ListNode* tempNext = next->next;
            next->next = head;
            head = next;
            next = tempNext;
        }
        
        return head;
    }
};

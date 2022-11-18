#pragma once

#include "DataStructure.h"

class Solution876 {
public:
    ListNode* middleNode(ListNode* head) {
        // can use fast and slow point to accelerate it
        ListNode* current = head;
        int length = 0;
        while (current != nullptr) {
            ++length;
            current = current->next;
        }

        int middle = length / 2;
        ListNode* result = head;
        for (int i = 0; i < middle; ++i){
            result = result->next;
        }
        return result;
    }
};
#pragma once
#include "DataStructure.h"
#include <iostream>

class Solution19 {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        int middle = 0;
        ListNode* next = slow->next;
        while (fast->next && fast->next->next) {
            fast = fast->next->next;

            if (middle == 0) {
                slow->next = nullptr;
            }
            ListNode* tempNext = next->next;
            next->next = slow;
            slow = next;
            next = tempNext;
            middle++;
        }

        std::cout << "slow: " << slow->val << '\n';
        std::cout << "fast: " << fast->val << '\n';
        std::cout << "middle: " << middle << '\n';

        int length = 0;
        if (!fast->next) {
            length = middle * 2 + 1;
        }
        else {
            length = middle * 2 + 2;
        }

        int index = length - n;
        int step = index - middle;
        
        ListNode* removeNode = slow;
        ListNode* removeNodePrev = slow->next;
        if (slow != head) {
            ListNode* prev = slow->next;
            slow->next = next;
            while (slow != head) {
                ListNode* tempPrev = prev->next;
                prev->next = slow;
                slow = prev;
                prev = tempPrev;
                if (step > 0) {
                    removeNodePrev = removeNode;
                    removeNode = removeNode->next;
                    --step;
                }
                else if (step < 0) {
                    removeNodePrev = prev;
                    removeNode = slow;
                    ++step;
                }
            }
        }
        else {
            removeNodePrev = nullptr;
        }
        while (step > 0) {
            removeNodePrev = removeNode;
            removeNode = removeNode->next;
            --step;
        }
        
        std::cout << "removed: " << removeNode->val << "\n";
        if (removeNodePrev) {
            removeNodePrev->next = removeNode->next;
            removeNode->next = nullptr;
                
            std::cout << "prev of removed: " << removeNodePrev->val << "\n";
        }
        else {
            head = removeNode->next;
            removeNode->next = nullptr;
        }

        return head;
    }
};
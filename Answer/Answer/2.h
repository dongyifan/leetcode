#pragma once
#include "DataStructure.h"

class Solution2 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* resultHead = new ListNode;
        ListNode* resultCurrent = resultHead;
        ListNode* resultPrev = nullptr;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr) {
            int left;
            if (l1 == nullptr) {
                left = 0;
            }
            else {
                left = l1->val;
                l1 = l1->next;
            }
            int right;
            if (l2 == nullptr) {
                right = 0;
            }
            else {
                right = l2->val;
                l2 = l2->next;
            }
            int sum = left + right + carry;
            if (sum < 10) {
                resultCurrent->val = sum;
                carry = 0;
            }
            else {
                resultCurrent->val = sum % 10;
                carry = sum / 10;
            }

            if (resultPrev != nullptr) {
                resultPrev->next = resultCurrent;
            }
            resultCurrent->next = nullptr;
            resultPrev = resultCurrent;

            if (l1 || l2) {
                resultCurrent = new ListNode;
            }
        }
        if (carry != 0) {
            resultCurrent = new ListNode(carry);
            resultPrev->next = resultCurrent;
        }
        return resultHead;

    }
};
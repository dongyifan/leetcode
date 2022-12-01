#pragma once
// retry
#include "DataStructure.h"
class Solution21 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head;
        if (list1 == nullptr) {
            head = list2;
            return head;
        }
        else if (list2 == nullptr) {
            head = list1;
            return head;
        }
        else {
            if (list1->val < list2->val) {
                head = list1;
                list1 = list1->next;
            }
            else {
                head = list2;
                list2 = list2->next;
            }
        }
        ListNode* current = head;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            }
            else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        if (list1 == nullptr) {
            current->next = list2;
        }
        else {
            current->next = list1;
        }
        return head;
    }
};
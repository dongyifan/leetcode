#pragma once
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <vector>
#include "DataStructure.h"

class Solution234 {
public:
    bool isPalindrome(const std::vector<int>& v) {
        for (int left = 0, right = static_cast<int>(v.size() - 1); left < right; ++left, --right) {
            if (v[left] != v[right]) return false;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        std::vector<int> v;
        ListNode* current = head;
        while (current != nullptr) {
            v.push_back(current->val);
            current = current->next;
        }
        return isPalindrome(v);

    }
};
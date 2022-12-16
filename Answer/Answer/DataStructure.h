#pragma once
#include <iostream>
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

int lengthOfList(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    int middle = 0;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        ++middle;
    }
    if (!fast->next) {
        return middle * 2 + 1;
    }
    else {
        return (middle + 1) * 2;
    }
}

void printList(ListNode* head) {
    std::cout << "[";
    while (head) {
        std::cout << head->val << ", ";
        head = head->next;
    }
    std::cout << "]\n";
}

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};
#pragma once
#include <vector>
#include "DataStructure.h"

using std::vector;
class Solution108 {
public:

    TreeNode* sortedArrayToBST(vector<int>::const_iterator begin, vector<int>::const_iterator end)
    {
        if (begin == end) { return nullptr; }

        int length = end - begin;
        if (length == 1) {
            return new TreeNode(*begin);
        }
        if (length == 2) {
            return new TreeNode(*begin, nullptr, new TreeNode(* (begin + 1)));
        }

        auto middle = begin + length / 2;

        TreeNode* left = sortedArrayToBST(begin, middle);
        TreeNode* right = sortedArrayToBST(middle + 1, end);

        TreeNode* node = new TreeNode(*middle, left, right);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums.begin(), nums.end());
    }
};
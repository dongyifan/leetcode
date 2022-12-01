#pragma once
#include "DataStructure.h"
#include <numeric>

class Solution104 {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        int maxDepth = std::max(leftDepth, rightDepth);
        return maxDepth + 1;
    }
};
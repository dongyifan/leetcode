#pragma once
#include "DataStructure.h"

class Solution101 {
public:

    bool isSymmetric(TreeNode* left, TreeNode* right) {
        if (left && !right) return false;
        if (!left && right) return false;
        if (!left && !right) return true;
        if (!left->left && right->right) return false;
        if (left->left && !right->right) return false;

        bool leftResult = isSymmetric(left->left, right->right);
        if (leftResult == false) return false;

        if (left->val != right->val) return false;

        bool rightResult = isSymmetric(left->right, right->left);
        if (rightResult == false) return false;

        return true;
    }

    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root->left, root->right);
    }
};
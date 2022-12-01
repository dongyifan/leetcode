#pragma once
#include "DataStructure.h"
#include <vector>

using std::vector;
class Solution94 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) {
            return {};
        }

        auto leftV = inorderTraversal(root->left);
        if (!leftV.empty()) {
            result.insert(result.end(), leftV.begin(), leftV.end());
        }

        result.push_back(root->val);
        

        auto rightV = inorderTraversal(root->right);
        if (!rightV.empty()) {
            result.insert(result.end(), rightV.begin(), rightV.end());
        }
        return result;
    }
};

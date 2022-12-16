#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;
class Solution22 {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        addingpar(res, "", n, 0);
        return res;
    }
    void addingpar(vector<string>& v, string str, int left, int right) {
        if (left == 0 && right == 0) {
            v.push_back(str);
            return;
        }
        if (right > 0) { 
            addingpar(v, str + ")", left, right - 1); 
        }
        if (left > 0) { 
            addingpar(v, str + "(", left - 1, right + 1); 
        }
    }
};
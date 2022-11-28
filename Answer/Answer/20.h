#pragma once
#include <vector>
#include <string>
using std::string;

class Solution20 {
public:
    bool isValid(string s) {
        std::vector<char> stack;
        for (char c : s) {
            if (c == '(' or c == '[' or c == '{') {
                stack.push_back(c);
            }
            else if (c == ')' or c == ']' or c == '}') {
                if (stack.empty()) return false;
                char top = stack.back();
                stack.pop_back();
                if (c == ')' and top != '(') return false;
                else if (c == ']' and top != '[') return false;
                else if (c == '}' and top != '{') return false;
            }
        }
        if (not stack.empty()) {
            return false;
        }
        return true;
    }
};
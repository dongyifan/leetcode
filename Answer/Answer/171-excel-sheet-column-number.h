#pragma once
#include <string>
using std::string;

class Solution171 {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (auto c : columnTitle) {
            int num = c - 'A' + 1;
            result = result * 26 + num;
        }
        return result;
    }
};
#pragma once
#include <string>
#include <vector>
using std::vector;
using std::string;
class Solution14 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        for (int i = 0;;++i) {
            char c = strs[0][i];
            for (auto& s : strs) {
                if (i >= s.length()) {
                    return result;
                }
                if (c != s[i]) {
                    return result;
                }
            }
            result.append({ c });
        }
    }
};
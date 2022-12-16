#pragma once
#include <string>
#include <map>
using std::string;
class Solution387 {
public:
    int firstUniqChar(string s) {
        std::map<char, int> table;

        for (char c : s) {
            ++table[c];
        }
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (table[c] == 1) {
                return i;
            }
        }
        return -1;

    }
};
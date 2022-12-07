#pragma once
#include <string>
using std::string;
class Solution242 {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int table[26] = { 0 };
        for (auto c : s) {
            ++table[c - 'a'];
        }

        for (auto c : t) {
            --table[c - 'a'];
            if (table[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};
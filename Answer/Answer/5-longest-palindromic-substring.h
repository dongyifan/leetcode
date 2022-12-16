#pragma once

// TODO: better solution existed Manacher's Algorithm

#include <string>

using std::string;

class Solution5_1 {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        if (size < 2) {
            return s;
        }
        int maxLength = 1;
        int start = 0;
        int left;
        int right;
        for (int i = 0; i < size; ++i) {
            left = i - 1;
            right = i + 1;

            while (left >= 0 && s[left] == s[i]) {
                --left;
            }

            while (right < size && s[right] == s[i]) {
                ++right;
            }

            while (left >= 0 && right < size && s[left] == s[right]) {
                --left;
                ++right;
            }
            int length = right - left - 1;
            if (maxLength < length) {
                maxLength = length;
                start = left + 1;
            }
        }
        return std::string(s.begin() + start, s.begin() + start + maxLength);


    }
};
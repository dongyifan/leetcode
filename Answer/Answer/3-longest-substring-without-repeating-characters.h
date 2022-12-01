#pragma once
#include <string>
#include <vector>
#include <utility>

using std::string;
using std::vector;
class Solution3 {
public:
    int lengthOfLongestSubstring(string s) {

        std::vector<int> pos(128, -1);
        int start = -1;
        int max_length = 0;
        for (int end = 0; end < s.length(); ++end) {
            int ch = s[end];
            start = std::max(start, pos[ch]);
            max_length = std::max(max_length, end - start);
            pos[ch] = end;
        }
        return max_length;

    }
};
#pragma once
#include <vector>
using std::vector;

class Solution344 {
public:
    void reverseString(vector<char>& s) {
        if (s.size() <= 1) return;

        int begin = 0;
        int end = s.size() - 1;
        while (begin < end) {
            std::swap(s[begin], s[end]);
            ++begin;
            --end;
        }
    }
};
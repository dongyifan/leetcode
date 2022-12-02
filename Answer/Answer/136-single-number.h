#pragma once
#include <vector>
using std::vector;

class Solution136 {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (auto i : nums) {
            result ^= i;
        }
        return result;
    }
};
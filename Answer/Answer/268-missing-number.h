#pragma once
#include <vector>
#include <numeric>
using std::vector;
class Solution268 {
public:
    int missingNumber(vector<int>& nums) {
        int sum = std::accumulate(nums.begin(), nums.end(), 0);
        return (1 + nums.size()) * nums.size() / 2 - sum;
    }
};
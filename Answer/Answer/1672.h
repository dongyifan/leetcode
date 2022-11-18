#pragma once
#include <vector>
#include <algorithm>
#include <numeric>

using std::vector;
class Solution1672 {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for (const auto& v : accounts) {
            max = std::max(max, std::accumulate(v.begin(), v.end(), 0));
        }
        return max;
    }
};
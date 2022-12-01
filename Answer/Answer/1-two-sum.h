#pragma once
#include <map>
#include <vector>
using std::vector;
class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> visited;
        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int remain = target - nums[i];
            if (visited.find(remain) != visited.end()) {
                return { visited[remain], i };
            }
            visited[nums[i]] = i;
        }
        return {};
    }
};
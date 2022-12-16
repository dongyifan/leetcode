#pragma once
#include <vector>
#include <map>
#include <algorithm>
using std::vector;

class Solution15 {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<std::vector<int>> triplets;
        
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int first = nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int second = nums[left];
                int third = nums[right];
                if (first + second == -third) {
                    triplets.push_back({ first, second, third });
                    ++left;
                    --right;
                    while (left < right && nums[left] == nums[left - 1]) {
                        ++left;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        --right;
                    }
                }
                else if (first + second < -third) {
                    ++left;
                    while (left < right && nums[left] == nums[left - 1]) {
                        ++left;
                    }
                }
                else {
                    --right;
                    while (left < right && nums[right] == nums[right + 1]) {
                        --right;
                    }
                }
            }
        }

        return triplets;
    }
};
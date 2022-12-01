#pragma once
#include <vector>
using std::vector;
class Solution26 {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[unique]) {
                ++unique;
                if (unique != i) {
                    nums[unique] = nums[i];
                }
            }
        }
        return unique + 1;
    }
};
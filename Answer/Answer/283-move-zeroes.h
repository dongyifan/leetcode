#pragma once
#include <vector>
using std::vector;

class Solution283 {
public:
    void moveZeroes(vector<int>& nums) {
        int begin = 0;

        while (begin < nums.size()) {
            if (nums[begin] != 0) {
                ++begin;
            }
            else {
                break;
            }
        }
        int end = begin + 1;

        while (end < nums.size() && begin < nums.size()) {
            if (nums[begin] == 0 && nums[end] != 0) {
                nums[begin] = nums[end];
                nums[end] = 0;
                ++begin;
                ++end;
            }
            else {
                if (nums[begin] != 0) {
                    ++begin;
                }
                if (nums[end] == 0) {
                    ++end;
                }
            }
        }
    }
};


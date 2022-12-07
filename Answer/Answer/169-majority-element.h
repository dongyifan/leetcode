#pragma once
#include <vector>
using std::vector;
class Solution169 {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majority;
        for (int i : nums) {
            if (count == 0) {
                majority = i;
                count = 1;
            }
            else {
                if (majority == i) {
                    ++count;
                }
                else {
                    --count;
                }
            }
        }
        return majority;
    }
};
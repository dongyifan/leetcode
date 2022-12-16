#pragma once
#include <vector>
using std::vector;

class Solution11 {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;
        while (left < right) {
            int area = std::min(height[left], height[right]) * (right - left);
            maxArea = std::max(area, maxArea);

            if (height[left] < height[right]) {
                ++left;
            }
            else {
                
                --right;
               
            }
        }
        return maxArea;
    }
};
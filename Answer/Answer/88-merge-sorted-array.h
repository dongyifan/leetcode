#pragma once
#include <vector>
using std::vector;

class Solution88 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mIndex = m - 1;
        int nIndex = n - 1;
        int current = m + n - 1;
        while (mIndex != -1 && nIndex != -1) {
            if (nums1[mIndex] < nums2[nIndex]) {
                nums1[current] = nums2[nIndex];
                --nIndex;
            }
            else {
                nums1[current] = nums1[mIndex];
                --mIndex;
            }
            --current;
        }

        while (nIndex != -1) {
            nums1[current] = nums2[nIndex];
            --nIndex;
            --current;
        }

    }
};
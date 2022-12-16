#pragma once
#include <vector>
#include <map>

using std::vector;

class Solution350 {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::map<int, int> table;
        for (int i : nums1) {
            if (table.find(i) != table.end()) {
                table[i] = table[i] + 1;
            }
            else {
                table[i] = 1;
            }
        }

        std::vector<int> result;
        for (int i : nums2) {
            if (table.find(i) != table.end() && table[i] != 0) {
                result.push_back(i);
                table[i] = table[i] - 1;
            }
        }
        return result;
    }
};
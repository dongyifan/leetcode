#pragma once
#include <vector>
#include <set>
using std::vector;
using std::set;

class Solution217 {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s{ nums.begin(), nums.end() };
        return s.size() != nums.size();
    }
};
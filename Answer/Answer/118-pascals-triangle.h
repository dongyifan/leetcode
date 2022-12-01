#pragma once
#include <vector>
using std::vector;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.push_back({ 1 });
        for (int i = 1; i < numRows; ++i) {
            vector<int> v;
            for (int j = 0; j <= i; ++j) {
                if (j == 0 || j == i) {
                    v.push_back(1);
                }
                else {
                    v.push_back(result[i - 1][j - 1] + result[i - 1][j]);
                }
            }
            result.push_back(v);
        }
        return result;
    }
};
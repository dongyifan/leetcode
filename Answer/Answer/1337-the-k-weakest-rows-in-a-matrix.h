#pragma once
#include <vector>
#include <algorithm>
using std::vector;
class Solution1337 {
public:

    static int count(const vector<int>& v) {
        int count = 0;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] == 1) {
                ++count;
            }
            else {
                break;
            }
        }
        return count;
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> result;
        for (int i = 0; i < mat.size(); ++i)
        {
            result.push_back(i);
        }

        std::stable_sort(result.begin(), result.end(), [&mat](int left, int right) {
            int leftCount = Solution1337::count(mat[left]);
            int rightCount = Solution1337::count(mat[right]);
            return leftCount < rightCount;
            });
        return { result.begin(), result.begin() + k };
    }
};
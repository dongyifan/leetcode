#pragma once
#include <vector>
using std::vector;
class Solution66 {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int carry = 0;
        
        for (int i = digits.size() - 1; i >= 0; --i) {
            int num = digits[i];
            if (i == digits.size() - 1) {
                num += 1;
            }
            if (carry != 0) {
                num += carry;
                carry = 0;
            }
            if (num == 10) {
                num = 0;
                carry = 1;
            }
            result.insert(result.begin(), num);
        }
        if (carry != 0) {
            result.insert(result.begin(), 1);
        }
        
        return result;
    }
};
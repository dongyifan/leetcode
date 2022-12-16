#pragma once
class Solution326 {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && (1162261467 % n) == 0; // 1162261467 is pow(3, 19), max integer of pow of 3
    }
};
#pragma once
#include <limits>
class Solution7 {
public:
    int reverse(int x) {

        static constexpr int lastDigitOfMaxInt = std::numeric_limits<int>::max() % 10;
        static constexpr int lastDigitOfMinInt = std::numeric_limits<int>::min() % 10;
        static constexpr int maxInt = std::numeric_limits<int>::max();
        static constexpr int minInt = std::numeric_limits<int>::min();
        int result = 0;
        while (x != 0) {
            int reminder = x % 10;
            x /= 10;

            if (result > maxInt / 10 || (result == maxInt / 10) && reminder > lastDigitOfMaxInt) {
                return 0;
            }
            if (result < minInt / 10 || (result == minInt / 10) && reminder < lastDigitOfMinInt) {
                return 0;
            }
            result = result * 10 + reminder;
        }
        return result;
    }
};
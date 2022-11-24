#pragma once
#include <string>
#include <limits>
using std::string;
class Solution8 {
public:
    
    bool isDidit(char c) {
        switch (c)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return true;
        default:
            return false;
        }
    }
    int myAtoi(string s) {
        int index = 0;
        while (s[index] == ' ') {
            index++;
        }

        bool isPositiveNumber = true;
        if (s[index] == '+') {
            index++;
            isPositiveNumber = true;
        }
        else if (s[index] == '-') {
            index++;
            isPositiveNumber = false;
        }

        static constexpr int lastDigitOfMaxInt = std::numeric_limits<int>::max() % 10;
        static constexpr int lastDigitOfMinInt = std::numeric_limits<int>::min() % 10;
        static constexpr int maxInt = std::numeric_limits<int>::max();
        static constexpr int minInt = std::numeric_limits<int>::min();

        int result = 0;
        if (isPositiveNumber) {
            while (index < s.length() && isDidit(s[index])) {
                int num = s[index] - 48;
                if (result > maxInt / 10 || (result == maxInt / 10) && num > lastDigitOfMaxInt)
                {
                    return maxInt;
                }
                result = result * 10 + num;
                index++;
            }
        }
        else {
            while (index < s.length() && isDidit(s[index])) {
                int num = -(s[index] - 48);
                if (result < minInt / 10 || (result == minInt / 10) && num < lastDigitOfMinInt)
                {
                    return minInt;
                }
                result = result * 10 + num;
                index++;
            }
        }
        return result;
    }
};
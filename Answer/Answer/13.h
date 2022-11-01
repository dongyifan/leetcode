#pragma once

#include <string>
#include <map>
using namespace std;
class Solution13 {
public:
    int romanToInt(string s) {
        std::map<char, int> m =
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int number = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
            char n = s[i];
            if ((n == 'V' || n == 'X') && i > 0 && s[i-1] == 'I') {
                number += m[n];
                number -= 1;
                --i;
            }
            else if ((n == 'L' || n == 'C') && i > 0 && s[i - 1] == 'X') {
                number += m[n];
                number -= 10;
                --i;
            }
            else if ((n == 'D' || n == 'M') && i > 0 && s[i - 1] == 'C') {
                number += m[n];
                number -= 100;
                --i;
            }
            else {
                number += m[n];
            }
        }
        return number;
    }
};

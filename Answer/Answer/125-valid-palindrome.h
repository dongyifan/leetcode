#pragma once
#include <string>
using std::string;

class Solution125 {
public:

    bool isValidChar(char c) {
        if (c >= 'a' && c <= 'z') return true;
        if (c >= 'A' && c <= 'Z') return true;
        if (c >= '0' && c <= '9') return true;

        return false;
    }

    int stepForward(const string& s, int currentIndex) {
        while (currentIndex < s.size()) {
            ++currentIndex;
            if (currentIndex < s.size() && isValidChar(s[currentIndex])) {
                return currentIndex;
            }
        }
        return currentIndex;
    }

    int stepBack(const string& s, int currentIndex) {
        while (currentIndex >= 0) {
            --currentIndex;
            if (currentIndex >= 0 && isValidChar(s[currentIndex])) {
                return currentIndex;
            }
        }
        return currentIndex;
    }

    char toLowercase(char c) {
        if (c >= 'A' && c <= 'Z') return c + 'a' - 'A';
        
        return c;
    }
    bool isPalindrome(string s) {

        int slowIndex = 0;
        int fastIndex = 0;
        if (!isValidChar(s[slowIndex])) {
            slowIndex = stepForward(s, slowIndex);
            fastIndex = slowIndex;
        }

        if (slowIndex == s.size()) {
            return true;
        }

        bool oddCount = false;
        while (true) {
            fastIndex = stepForward(s, fastIndex);
            if (fastIndex == s.size()) {
                oddCount = true;
                break;
            }
            fastIndex = stepForward(s, fastIndex);
            if (fastIndex == s.size()) {
                oddCount = false;
                break;
            }
            slowIndex = stepForward(s, slowIndex);
        }

        int left = slowIndex;
        int right = slowIndex;
        if (!oddCount) {
            right = stepForward(s, slowIndex);
        }

        while (left >= 0 && right < s.size()) {
            if (toLowercase(s[left]) != toLowercase(s[right])) {
                return false;
            }
            left = stepBack(s, left);
            right = stepForward(s, right);
        }
        return true;

    }
};
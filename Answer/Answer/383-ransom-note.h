#pragma once
#include <string>
#include <set>
using std::string;
class Solution383 {
public:
    bool canConstruct(string ransomNote, string magazine) {

        if (ransomNote.length() > magazine.length()) return false;

        std::multiset<char> magazineSet{ magazine.begin(), magazine.end() };

        for (char c : ransomNote) {
            auto iter = magazineSet.find(c);
            if (iter != magazineSet.end()) {
                magazineSet.erase(iter);
            }
            else {
                return false;
            }
        }
        return true;
    }
};
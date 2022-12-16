#pragma once
#include <string>
#include <vector>
#include <unordered_map>

using std::string;
using std::vector;

class Solution17 {
public:

    std::unordered_map<char, string> searchMap_ = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
    };

    vector<string> letterCombinations2(string digits) {
        if (digits.empty()) {
            return {};
        }

        std::vector<string> result;
        if (digits.size() == 1) {
            for (char c : searchMap_[digits[0]]) {
                result.emplace_back(1, c);
            }
            return result;
        }

        std::string digitsString = searchMap_[digits[0]];
        for (char d : digitsString) {
            vector<string> v = letterCombinations2(std::string(digits.begin() + 1, digits.end()));
            for (const auto& s : v) {
                result.emplace_back(s + d);
            }
        }
        return result;
    }


    vector<string> letterCombinations(string digits) {
        std::unordered_map<char, string> searchMap = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        vector<string> prevIteration;
        for (char digit : digits) {
            string digitsString = searchMap[digit];
            vector<string> currentIteration;
            for (char c : digitsString) {
                if (prevIteration.size() == 0) {
                    currentIteration.emplace_back(1, c);
                }
                else {
                    for (auto& s : prevIteration) {
                        currentIteration.push_back(s + c);
                    }
                }
            }
            prevIteration.swap(currentIteration);
        }
        return prevIteration;

    }
};
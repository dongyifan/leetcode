#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;
class Solution412 {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0) {
                v.emplace_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                v.emplace_back("Fizz");
            }
            else if (i % 5 == 0) {
                v.emplace_back("Buzz");
            }
            else {
                v.emplace_back(std::to_string(i));
            }
        }
        return v;
    }
};
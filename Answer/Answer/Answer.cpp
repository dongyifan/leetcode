// Answer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "13.h"
#include "234.h"
#include "383.h"
#include "412.h"
#include "1337.h"
#include "876.h"
#include "1342.h"
#include "1672.h"
#include "1.h"
#include "3.h"
int main()
{
    std::cout << "Hello World!\n";
    Solution13 s13;
    std::cout << s13.romanToInt("III") << '\n';
    std::cout << s13.romanToInt("LVIII") << '\n';
    std::cout << s13.romanToInt("MCMXCIV") << '\n';

    auto vec = Solution412{}.fizzBuzz(15);
    for (const auto& v : vec) {
        std::cout << v << ",";
    }
    std::cout << "\n";

    std::cout << Solution1342{}.numberOfSteps(123) << '\n';

    std::vector<std::vector<int>> accounts = { {1, 2, 3}, {3, 2, 1} };
    std::cout << "max: " << Solution1672{}.maximumWealth(accounts);

    std::cout << "maxlenght: " << Solution3{}.lengthOfLongestSubstring("abcabcbb");

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

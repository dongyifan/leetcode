// Answer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <numeric>
#include <array>
#include "DataStructure.h"
#include "13-roman-to-integer.h"
#include "234-palindrome-linked-list.h"
#include "383-ransom-note.h"
#include "412-fizz-buzz.h"
#include "1337-the-k-weakest-rows-in-a-matrix.h"
#include "876-middle-of-the-linked-list.h"
#include "1342-number-of-steps-to-reduce-a-number-to-zero.h"
#include "1672-richest-customer-wealth.h"
#include "1-two-sum.h"
#include "3-longest-substring-without-repeating-characters.h"
#include "7-reverse-integer.h"
#include "8-string-to-integer-atoi.h"
#include "20-valid-parentheses.h"
#include "26-remove-duplicates-from-sorted-array.h"
#include "69-sqrtx.h"
#include "88-merge-sorted-array.h"
#include "125-valid-palindrome.h"
#include "191-number-of-1-bits.h"
#include "202-happy-number.h"
#include "242-valid-anagram.h"
#include "283-move-zeroes.h"
#include "5-longest-palindromic-substring.h"
#include "11-container-with-most-water.h"
#include "15-3sum.h"
#include "17-letter-combinations-of-a-phone-number.h"
#include "206-reverse-linked-list.h"
#include "19-remove-nth-node-from-end-of-list.h"
#include "22-generate-parentheses.h"


int main()
{
    {
        auto rv = Solution22().generateParenthesis(2);
    }
    {
        std::array arr = { 1,2, 3, 4 };
        ListNode* head = nullptr;
        ListNode* tail = head;
        for (int v : arr) {
            if (head == nullptr) {
                head = new ListNode(v);
                tail = head;
            }
            else {
                tail->next = new ListNode(v);
                tail = tail->next;
            }
        }
        printList(head);
        head = Solution19().removeNthFromEnd(head, 1);
        printList(head);
        return 0;
    }
    auto vdig = Solution17{}.letterCombinations2("23");
    for (auto& s : vdig) {
        std::cout << s << " ";
    }
    std::cout << "\n";
    int three = std::pow(3, 19);
    std::vector<int> includeZero = { 7, 0, 1, 2, 4, 0, 5, 0 };
    Solution283{}.moveZeroes(includeZero);
    for (auto i : includeZero) {
        std::cout << i << " ";
    }
    return 0;

    int sum = 0;
    for (int i = 1; i <= 9; ++i) {
        sum += i;
    }
    bool rs = Solution202{}.isHappy(19);
    
    int a1 = 'a';
    int A1 = 'A';
    std::cout << Solution8{}.myAtoi("-123") << "\n";
    std::cout << Solution7{}.reverse(-123) << "\n";
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

    std::cout << "maxlenght: " << Solution3{}.lengthOfLongestSubstring("abcabcbb") << "\n";

    std::vector<int> v = { 1,1,3,4,4,6 };
    std::cout << "unique length: " << Solution26{}.removeDuplicates(v) << "\n";

    Solution69{}.mySqrt(3);

    std::vector<int> m = {1, 2, 3, 0, 0, 0 };
    std::vector<int> n = { 4, 5, 6 };
    Solution88{}.merge(m, 3, n, 3);

    //bool is = Solution125{}.isPalindrome("     ");
    //is = Solution125{}.isPalindrome("  a  ");
    bool is = Solution125{}.isPalindrome("  0  1");
    is = Solution125{}.isPalindrome("A man, a plan, a canal : Panama");

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

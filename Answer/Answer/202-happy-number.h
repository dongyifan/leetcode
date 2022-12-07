#pragma once

class Solution202 {
public:

    int sumOfSquare(int n) {
        int result = 0;
        while (n != 0) {
            result = (n % 10) * (n % 10) + result;
            n = n / 10;
        }
        return result;
    }

    bool isHappy(int n) {
        int slow = sumOfSquare(n);

        if (slow == 1) return true;

        int fast = sumOfSquare(sumOfSquare(n));

        while (slow != fast) {
            slow = sumOfSquare(slow);
            fast = sumOfSquare(sumOfSquare(fast));
        }


        return slow == 1;
    }
};
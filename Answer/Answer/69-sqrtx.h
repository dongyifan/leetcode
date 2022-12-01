#pragma once

class Solution69 {
public:
    int mySqrt(int x) {
        int begin = 0;
        int end = x;
        while (begin != (begin + (end - begin) / 2)) {
            int middle = begin + (end - begin) / 2;
            if (middle == x / middle && x % middle == 0) {
                return middle;
            }

            if (middle > x / middle) {
                end = middle;
            }
            else {
                begin = middle;
            }
        }
        if ((begin + 1) > x / (begin + 1)) {
            return begin;
        }
        else {
            return begin + 1;
        }
    }
};
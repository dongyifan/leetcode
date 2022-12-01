#pragma once
#include <vector>
using std::vector;

class Solution121 {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        for (int buyDay = 0, sellDay = 1; sellDay < prices.size();) {
            if (prices[sellDay] > prices[buyDay]) {
                int newProfit = prices[sellDay] - prices[buyDay];
                profit = std::max(newProfit, profit);
                ++sellDay;
            }
            else {
                buyDay = sellDay;
                ++sellDay;
            }
        }
        return profit;
    }
};

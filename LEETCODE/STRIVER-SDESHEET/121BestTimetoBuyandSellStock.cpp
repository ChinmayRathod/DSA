// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0], maxi = prices[0];
        int profit = 0;
        for(int i = 0;i< prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
                maxi = prices[i];
            }
            else if(prices[i] > maxi){
                maxi = prices[i];
                profit = max(maxi - min, profit);
            }
        }
        return profit;
    }
};
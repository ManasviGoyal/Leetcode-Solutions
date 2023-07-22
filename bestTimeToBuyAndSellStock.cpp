// Complexity - Time: O(n), Space: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, l = 0, r = 1;

        while(r < prices.size()) {
            if(prices[r] > prices[l]) {
                maxProfit = max(maxProfit, prices[r] - prices[l]);
            }
            else {
                l = r;
            }
            ++r;
        }
        return maxProfit;
    }
};
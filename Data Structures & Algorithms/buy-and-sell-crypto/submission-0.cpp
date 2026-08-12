class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minelement=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            minelement=min(prices[i],minelement);
            profit=max(profit,prices[i]-minelement);
        }
        return profit;
    }
};

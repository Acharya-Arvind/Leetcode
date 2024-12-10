class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=INT_MAX;
        int sell=INT_MIN;
        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]);
            sell=max(sell,prices[i]-buy);
        }
        return sell;
    }
};

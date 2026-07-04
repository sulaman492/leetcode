class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,minimum=prices[0];
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-minimum;
            maxProfit=max(maxProfit,profit);
            minimum=min(minimum,prices[i]);
        }
        return maxProfit;
    }
};
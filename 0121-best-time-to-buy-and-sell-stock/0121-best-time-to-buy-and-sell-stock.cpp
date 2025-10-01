class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxProfit=0,bestBuy=prices[0];
         for(int i=0;i<prices.size();i++)
         {
            if(prices[i]>bestBuy){
                maxProfit=max(prices[i]-bestBuy,maxProfit);
            }
            bestBuy=min(bestBuy,prices[i]);
         }
         return maxProfit;
    }
};
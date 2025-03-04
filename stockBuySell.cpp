class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit=0;
        int bestBuy=prices[0];
        for(int i =0; i<n;i++){
            if(prices[i]>bestBuy){
                maxProfit = max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy = min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};
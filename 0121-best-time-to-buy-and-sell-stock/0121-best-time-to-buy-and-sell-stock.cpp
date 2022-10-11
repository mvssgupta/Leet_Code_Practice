class Solution {
public:
    int maxProfit(vector<int>& stockPrices) {
        // int minPrice = INT_MAX;
        // int maxPro = 0;
        // for(int i=0;i<prices.size();i++){
        //     minPrice = (minPrice>prices[i])?prices[i]:minPrice;
        //     maxPro = (maxPro>(prices[i]-minPrice))?maxPro:(prices[i]-minPrice);
        // }
        // return maxPro;
         int N=stockPrices.size(),large=stockPrices[N-1],maxProfit=0;
        for(int i=N-1;i>=0;i--)
        {
            if(stockPrices[i]>=large)
            {
                large=stockPrices[i];
            }
            stockPrices[i]=large-stockPrices[i];
            maxProfit = max(maxProfit,stockPrices[i]);
        }
        return maxProfit;
    }
};
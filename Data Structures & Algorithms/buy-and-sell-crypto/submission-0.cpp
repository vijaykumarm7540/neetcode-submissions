class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
        {
          return 0;
        }

        int minprice=INT_MAX;
        int maxprof=0;
        for(int price :prices)
        {
          minprice = min (minprice , price);
          int profit = price -minprice;
          maxprof = max(maxprof , profit);
        }
        return maxprof;
    }
};

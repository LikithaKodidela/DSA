class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
        {
             return 0;
        }
        int min_price=prices[0];
        int max_profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<min_price)
            {
                min_price=prices[i];
            }
            else
            {
                int profit=prices[i]-min_price;
                if(profit > max_profit)
                {
                  max_profit=profit;
                }
                
            }
        }
        return max_profit;
    }
};
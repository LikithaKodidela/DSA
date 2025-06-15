class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int right=1,left=0;
            while(right<n)
            {
                if(prices[right]>prices[left])
                {
                    maxprofit=max(maxprofit,prices[right]-prices[left]);
                }
                else
                {
                    left=right;
                }
                right++;
            }
        return maxprofit; 
    }
};
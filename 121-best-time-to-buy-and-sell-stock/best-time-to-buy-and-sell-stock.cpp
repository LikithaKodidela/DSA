class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int minPrice=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<nums.size();i++)
        {
            minPrice=min(nums[i],minPrice);
            int profit=nums[i]-minPrice;
            maxProfit=max(profit,maxProfit);
        }
        return maxProfit;
    }
};
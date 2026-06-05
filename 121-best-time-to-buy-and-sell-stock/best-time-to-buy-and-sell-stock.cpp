class Solution {
public:
    int maxProfit(vector<int>& nums) {
       int n=nums.size();
       int max_profit=0;
       int min_price=INT_MAX;
       int right=1,left=0;
       while(right<n)
       {
           if(nums[right]>nums[left])
           {
              max_profit=max(max_profit,nums[right]-nums[left]);
           }
           else
           {
             left=right;
           }
           right++;
       }
       return max_profit;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int current_sum=nums[0],max_sum=nums[0];
        for(int i=1;i<n;i++)
        {
            current_sum=max(current_sum+nums[i],nums[i]);
            max_sum=max(current_sum,max_sum);
        }
        return max_sum;
    }
};
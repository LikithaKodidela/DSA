class Solution {
    bool solve(vector<int> nums, int target)
    {
        int n = nums.size();
        vector<vector<bool>> dp(n,vector<bool> (target+1,false));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
        if(nums[0]<=target)
        {
            dp[0][nums[0]] = true;
        }
        for(int i=1;i<n;i++)
        {
            for(int k=1;k<=target;k++)
            {
                bool notTake = dp[i-1][k];
                bool take = false;
                if(nums[i]<=k)
                {
                    take = dp[i-1][k-nums[i]];
                }
                dp[i][k]=take || notTake ;
            }
        }
        return dp[n-1][target];
    }
public:
    bool canPartition(vector<int>& nums) {
        int target = 0;
        for(int num :nums)
        {
            target+=num;
        }
        if(target%2 !=0) return false;
        return solve(nums,target/2);
    }
};
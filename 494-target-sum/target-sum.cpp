class Solution {
    int solve(int ind, vector<int>& nums , int target , vector<vector<int>> &dp)
    {
        if (ind == 0)
        {
            if(nums[ind] == 0  && target==0) return 2;
            if(target == 0 || target == nums[0]) return 1;
            return 0;
        }

        if(dp[ind][target]!=-1) return dp[ind][target];

        int notTake = solve(ind - 1 , nums , target , dp) ;
        int take = 0;
        if(nums[ind]<=target)
        {
            take = solve(ind - 1, nums , target-nums[ind], dp );
        }
        return dp[ind][target]= take  +  notTake ;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int totalSum = 0;
        for(int i=0; i<n ;i++)
        {
            totalSum += nums[i];
        }
        if((totalSum - target)%2  || totalSum < target ) return 0;
        int sum = (totalSum - target) / 2 ;
        vector<vector<int>> dp(n,vector<int> (sum+1,-1));
        return solve(n-1,nums,sum,dp);
    }
};
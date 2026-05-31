class Solution {
    // int solve(int ind,int n,vector<int> &nums,vector<int> &dp)
    // {
    //     if(ind >=n) return 0;
    //     if(dp[ind]!=-1) return dp[ind];
    //     int notTake = solve(ind+1,n,nums,dp);
    //     int take = nums[ind] + solve(ind+2,n,nums,dp);

    //     return dp[ind]=max(take,notTake);
    // }
public:
    int rob(vector<int>& nums) {
        int n =nums.size();
        vector<int> dp(n+2,0);
        for(int i=n-1;i>=0;i--)
        {
            int notTake = dp[i+1];
            int take = nums[i] + dp[i+2];
            dp[i] = max(take,notTake);
        }
        return dp[0];
    }
};
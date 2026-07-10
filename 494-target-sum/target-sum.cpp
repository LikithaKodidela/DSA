class Solution {
    // int solve(int ind, vector<int>& nums , int target , vector<vector<int>> &dp)
    // {
    //     if (ind == 0)
    //     {
    //         if(nums[ind] == 0  && target==0) return 2;
    //         if(target == 0 || target == nums[0]) return 1;
    //         return 0;
    //     }

    //     if(dp[ind][target]!=-1) return dp[ind][target];

    //     int notTake = solve(ind - 1 , nums , target , dp) ;
    //     int take = 0;
    //     if(nums[ind]<=target)
    //     {
    //         take = solve(ind - 1, nums , target-nums[ind], dp );
    //     }
    //     return dp[ind][target]= take  +  notTake ;
    // }
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
        //vector<vector<int>> dp(n,vector<int> (sum+1,0));
        vector<int> prev(sum+1,0);

        if(nums[0]==0) prev[0]=2;
        else prev[0]=1;

        if(nums[0]!=0 && nums[0]<=sum) prev[nums[0]] = 1;

        for(int ind=1; ind<n; ind++)
        {
            vector<int> curr(sum+1 , 0);
            for(int target = 0;target<=sum;target++)
            {
                int notTake = prev[target];
                int take = 0;
                if(nums[ind]<=target) take = prev[target-nums[ind]];
                 curr[target] = take + notTake ;
            }
            prev = curr;
        }
        return prev[sum];
    }
};
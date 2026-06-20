

class Solution {
    int dp[21][2001];

    int solve(int ind, int currSum, vector<int>& nums, int target)
    {
        if (ind < 0)
            return currSum == target;

        // currSum ranges from -1000 to 1000
        if (dp[ind][currSum + 1000] != -1)
            return dp[ind][currSum + 1000];

        int plus = solve(ind - 1, currSum + nums[ind], nums, target);
        int minus = solve(ind - 1, currSum - nums[ind], nums, target);

        return dp[ind][currSum + 1000] = plus + minus;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target)
    {
        memset(dp, -1, sizeof(dp));

        return solve(nums.size() - 1, 0, nums, target);
    }
};
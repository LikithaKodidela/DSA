class Solution {
    int solve(vector<int>& nums, int start, int end) {
        vector<int> temp;

        for(int i = start; i <= end; i++)
            temp.push_back(nums[i]);

        int n = temp.size();

        if(n == 1) return temp[0];

        vector<int> dp(n);

        dp[0] = temp[0];
        dp[1] = max(temp[0], temp[1]);

        for(int i = 2; i < n; i++) {
            dp[i] = max(temp[i] + dp[i-2], dp[i-1]);
        }

        return dp[n-1];
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        return max(solve(nums, 0, n-2),
                   solve(nums, 1, n-1));
    }
};
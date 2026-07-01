class Solution {
    int solve(int ind, int currSum , vector<int>& nums , int target)
    {
        if (ind == nums.size())
        {
            return currSum==target;
        }
        
        int plus = solve(ind+1,currSum+nums[ind],nums,target);
        int minus = solve(ind+1,currSum-nums[ind],nums,target);
        return plus +  minus;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0,0,nums,target);
    }
};
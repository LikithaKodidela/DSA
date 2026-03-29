class Solution {
    int numSubarrays(vector<int>& nums,int goal)
    {
        int l=0,r=0;
        int sum=0,count=0;
        if(goal<0) return 0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum>goal)
            {
                sum=sum-nums[l];
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return numSubarrays(nums,goal)-numSubarrays(nums,goal-1);
    }
};
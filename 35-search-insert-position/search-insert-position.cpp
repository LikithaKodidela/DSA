class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin=0;
        int n=nums.size();
        int end=n-1;
        int ans=n;
        while(begin<=end)
        {
            int mid=begin+(end-begin)/2;
            if(nums[mid]>=target)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                begin=mid+1;
            }
        }
        return ans;
    }
};
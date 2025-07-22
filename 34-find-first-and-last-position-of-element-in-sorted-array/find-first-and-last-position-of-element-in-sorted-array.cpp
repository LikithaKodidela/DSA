class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lowerBound(nums,target);
        int last = upperBound(nums, target);
        if(first==nums.size()||nums[first]!=target)return {-1,-1};
        return {first,last-1};
    }

      int lowerBound(vector<int> &nums,int target)
      {
        int begin=0,n=nums.size();
        int last=n-1;
        int ans=n;
        while(begin<=last)
        {
           int mid=begin+(last-begin)/2;
           if(nums[mid]>=target)
           {
               ans=mid;
               last=mid-1;
           }
           else{
            begin=mid+1;
           }
        }
        return ans;
      } 
      int upperBound(vector<int>nums,int target)
      {
        int begin=0,n=nums.size();
        int last=n-1;
        int ans=n;
        while(begin<=last)
        {
           int mid=begin+(last-begin)/2;
           if(nums[mid]>target)
           {
               ans=mid;
               last=mid-1;
           }
           else{
            begin=mid+1;
           }
        }
        return ans;
      }
};
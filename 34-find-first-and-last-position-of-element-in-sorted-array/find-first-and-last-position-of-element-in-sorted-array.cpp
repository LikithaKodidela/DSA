class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first =firstOccurrence(nums,target);
        if(first==nums.size()||nums[first]!=target)return {-1,-1};
         int last =lastOccurrence(nums,target);
        return {first,last};
    }

      int firstOccurrence(vector<int> &nums,int target)
      {
        int begin=0,n=nums.size();
        int last=n-1;
        int ans=n;
        while(begin<=last)
        {
           int mid=begin+(last-begin)/2;
           if(nums[mid]==target)
           {
               ans=mid;
               last=mid-1;
           }
           else if(nums[mid]<target){
            begin=mid+1;
           }
           else{
            last=mid-1;
           }
        }
        return ans;
      } 
      int lastOccurrence(vector<int>nums,int target)
      {
        int begin=0,n=nums.size();
        int last=n-1;
        int ans=n;
        while(begin<=last)
        {
           int mid=begin+(last-begin)/2;
           if(nums[mid]==target)
           {
               ans=mid;
               begin=mid+1;
           }
            else if(nums[mid]<target){
            begin=mid+1;
           }
           else{
            last=mid-1;
           }
        }
        return ans;
      }
};
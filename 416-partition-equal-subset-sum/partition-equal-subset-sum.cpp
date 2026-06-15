class Solution {
    bool solve(int target,vector<int>& nums)
    {
        int n = nums.size();
        vector<bool> curr(target+1,0) , prev(target+1,0);
       for(int i =0;i<n;i++)
       {
          prev[0] = true;
       }
       if ( nums[0]<=target) prev[nums[0]] = true;
       for(int i=1;i<n;i++)
       {
         for(int k=0;k<=target;k++)
         {
            bool notTake = prev[k];
            bool take = false ;
            if(nums[i]<=k) 
            {
                take = prev[k-nums[i]];
            }
            curr[k] = take || notTake;
         }
         prev = curr;
       }
       return prev[target];
    }

public:
    bool canPartition(vector<int>& nums) {
         int sum = 0;
         int n = nums.size();
         
         for(int num:nums)
         {
            sum+=num;
         }
         if(sum % 2 != 0) return false;

         int target = sum/2;
     
         return solve(target,nums);
    }
};
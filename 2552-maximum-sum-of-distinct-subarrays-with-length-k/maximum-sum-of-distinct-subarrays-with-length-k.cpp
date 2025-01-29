class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(),l=0;
        long long current_sum=0;
        long long max_sum=0;
        unordered_map<int,int> fmap;
        for(int i=0;i<n;i++)
        {
            current_sum+=nums[i];
            fmap[nums[i]]++;

            if(i-l+1==k) //If the window size is exactly k, check if it's valid
            { 
                //Check if the window contains exactly k distinct elements
                if(fmap.size()==k)
                {
                    max_sum=max(max_sum,current_sum);
                }
            
                 current_sum-=nums[l];
                 fmap[nums[l]]--;
               if(fmap[nums[l]]==0)
                {
                fmap.erase(nums[l]);
                }
                l++;
            }
        }
        return max_sum;
    }
};
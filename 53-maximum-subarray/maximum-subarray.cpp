class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0;
        int maxsum=INT_MIN;
        for(int val:nums)
        {
            current_sum+=val;
            maxsum=max(current_sum,maxsum);
            if(current_sum<0)
            {
                current_sum=0;
            } 
        }
        return maxsum;
    }
        /* BRUTE FORCE
        int max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum>max_sum)
                {
                    max_sum=sum;
                }
            }
        }
        return max_sum;
    }*/
};
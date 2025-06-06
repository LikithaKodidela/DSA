class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                count++;
            }
            else
            {
                res.push_back(count);
                count=0;
            }
        }
         res.push_back(count);
        int max=-1;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]>max)
            {
                max=res[i];
            }
        }
        return max;
    }
};
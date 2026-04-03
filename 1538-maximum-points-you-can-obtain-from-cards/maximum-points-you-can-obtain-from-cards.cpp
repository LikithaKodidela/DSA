class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum=0;
        int rsum=0;
        for(int i=0;i<k;i++)
        {
           lsum+=nums[i];
        }
         int maxsum=lsum;
         int rindex=nums.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=nums[i];
            rsum+=nums[rindex];
            rindex--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};
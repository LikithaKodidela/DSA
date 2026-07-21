class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks=0;
        if(nums[n-1] > nums[0]) breaks++;
        for(int i=0;i< n-1 ;i++)
        {
            if(nums[i] > nums[i+1])
            {
                breaks++;
            }
        }
        if(breaks>=2) return false;
        else return true;
        
    }
};
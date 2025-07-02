class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int xr=0;
        int xr2=0;
        for(int i=0;i<N;i++)
        {
            xr2^=nums[i];
            xr^=(i+1);
        }
        return  (xr^xr2);
    }
};

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long current_zeros=0;
        for(int num:nums)
        {
            if(num==0)
            {
                current_zeros++;
                count+=current_zeros;
            }
            else
            {
                current_zeros=0;
            }
        }
        return count;
    }
};
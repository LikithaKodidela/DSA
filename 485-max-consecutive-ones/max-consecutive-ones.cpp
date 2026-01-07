class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max_count=0;
        for(int num :nums)
        {
            if(num!=1)
            {
                count=0;
            }
            else
            {
                count++;
            }
            max_count=max(count,max_count);
        }
        return max_count;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int maxlen=1,lastsmall=INT_MAX;
          if (n == 0) return 0;
        for (int i = 0; i < n; ++i)
         {
             if (i > 0 && nums[i] == nums[i - 1]) continue;   // ignore duplicates

                if (i > 0 && nums[i] == nums[i - 1] + 1) {
                    ++count;
            } 
            else 
            {
                count = 1;
            }
            maxlen = max(maxlen, count);
        }
       return maxlen;
    }
};
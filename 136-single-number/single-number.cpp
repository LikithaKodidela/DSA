class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(auto &it : freq)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
        return -1;
    }
};
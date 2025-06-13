class Solution {
public:
    int majorityElement(vector<int>& nums) {
          map<int,int> mpp;
        int freq=0,res=0;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto &it:mpp)
        {
            if(it.second>freq)
            {
                res=it.first;
                freq=it.second;
            }
        }
        return res;
    
    }
};
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        int res=INT_MAX;
        int freq=0;
        for(auto val:nums)
        {
            if(val%2==0)
            {
                mpp[val]++;
            }
            if(mpp[val]>freq ||(mpp[val]==freq && val<res))
            {
                res=val;
                freq=mpp[val];
            }
        }
        return freq==0? -1:res;
    }

};
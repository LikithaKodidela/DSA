class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
              mpp[nums[i]]++;
            }
        }
        int res=-1;
        int maxfreq=0;
        for(auto &it:mpp)
        {
            int key=it.first;
            int freq=it.second;
            if(freq>maxfreq || (freq==maxfreq && key<res))
            {
                res=key;
                maxfreq=freq;
            }
        }
        return res;
    }
};
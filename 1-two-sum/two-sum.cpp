class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> mpp;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        int a=nums[i];
        int b=target-a;
        if(mpp.find(b)!=mpp.end())
        {
            return{i,mpp[b]};
        }
        mpp[a]=i;
       }
       return{-1,-1};
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
         vector<int> res(n);
        int neg=1,pos=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                res[pos]=nums[i];
                pos+=2;
            }
            else if(nums[i]<0)
            {
                res[neg]=nums[i];
                neg+=2;
            }
        }
        return res;
    }
};
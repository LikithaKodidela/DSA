class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(res.size()==0||res[0]!=nums[i])
            {
                int cnt=0;
                for(int j=0;j<n;j++)
                {
                    if(nums[j]==nums[i])
                    {
                        cnt++;
                    }
                   
                }
               if(cnt>(n/3))
                    {
                        res.push_back(nums[i]);
                    }
            }
              if(res.size()==2)
                {
                    break;
                }
        }
        return res;
    }
};
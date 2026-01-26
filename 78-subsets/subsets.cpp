class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int total= (1<<n);
        vector<vector<int>> ans;
        for(int num=0;num<total;num++)
        {
            vector<int> curr;
            
            for(int i=0;i<n;i++)
            {
                if(num&(1<<i))
                {
                    curr.push_back(nums[i]);
                }
            }
            ans.push_back(curr);
        }
        return ans;       
   }   
};
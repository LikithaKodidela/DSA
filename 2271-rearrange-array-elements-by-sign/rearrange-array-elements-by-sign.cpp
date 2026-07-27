class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n),even,odd;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                odd.push_back(nums[i]);
            }
            else
            {
                even.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++)
        {
            ans[2*i+1] = odd[i];
            ans[2*i] = even[i];
        }
        return ans;
    }
};
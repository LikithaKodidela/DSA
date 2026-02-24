class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans;
         for(int x: nums1)
         {
            int nge=-1;
            int j=0;
            for(;j<nums2.size();j++)
            {
                if(nums2[j]==x)
                {
                    break;
                }
            }
            for(int k=j+1;k<nums2.size();k++)
            {
                if(nums2[k] > x)
                {
                    nge=nums2[k];
                    break;
                }
            }
            ans.push_back(nge);
         }
         return ans;
    }

};
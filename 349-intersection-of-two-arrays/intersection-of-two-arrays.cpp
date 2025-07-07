class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> hashset;
        set<int> ans;
        vector<int> res;
        for(int i=0;i<nums1.size();i++)
        {
            hashset.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(hashset.find(nums2[i])!=hashset.end())
            {
                ans.insert(nums2[i]);
            }
        }
        for(auto it:ans)
        {
            res.push_back(it);
        }
        return res;
    }
};
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        for(int num:nums1)
        {
            map1[num]++;
        }
        for(int num:nums2)
        {
            map2[num]++;
        }
        for(auto it:map1)
        {
          int num=it.first;
          if(map2.find(num)!=map2.end())
          {
            int freq=min(it.second,map2[num]);
            for(int i=0;i<freq;i++)
            {
             res.push_back(num);
            }
          }
        }
        return res;
    }
};
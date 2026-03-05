class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int i=0 ; i<k ; i++){
              mp[nums[i]]++;
        }
        int l = 0;
        int r = k-1;
        vector<int> ans;
        while (r < nums.size()){
              int maxi = mp.rbegin() -> first; 
              ans.push_back(maxi);

              r++;
              if (r == nums.size()) break;
              mp[nums[r]]++;
              mp[nums[l]]--;
              if (mp[nums[l]] == 0) mp.erase(nums[l]);
              l++;
        }
        return ans;
  }
};
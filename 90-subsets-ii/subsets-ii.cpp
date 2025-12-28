class Solution {
public:
    void backtrack(vector<int>& nums,
                   vector<vector<int>>& res,
                   vector<int>& root,
                   int k) {

        if (k == nums.size()) {
            res.push_back(root);
            return;
        }

        int idx = k;
        while (idx < nums.size() && nums[idx] == nums[k]) {
            idx++;
        }

        // Skip all duplicates of nums[k]
        backtrack(nums, res, root, idx);

        // Take current element
        root.push_back(nums[k]);
        backtrack(nums, res, root, k + 1);
        root.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> root;
        backtrack(nums, res, root, 0);
        return res;
    }
};
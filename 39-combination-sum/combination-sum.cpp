class Solution {
public:
    

    void solve(int i, vector<int>& arr, vector<int>& temp, int target,vector<vector<int>>& ans) {
           if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (i == arr.size() || target < 0) {
            return;
        }
        temp.push_back(arr[i]);
        solve(i, arr, temp, target - arr[i],ans);
        temp.pop_back();
        solve(i + 1, arr, temp, target,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
      vector<vector<int>> ans;
        vector<int> temp;
        solve(0, arr, temp, target,ans);
        return ans;
    }
};
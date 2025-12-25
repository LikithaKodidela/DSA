class Solution {
void solve(int i, vector<int>& arr, vector<int>& temp, int target,vector<vector<int> > &ans) {
       if(target==0)
       {
         ans.push_back(temp);
         return;
       }
       if(target<0 || i==arr.size())
       {
         return;
       }

       temp.push_back(arr[i]);
       solve(i,arr,temp,target-arr[i],ans);
       
       temp.pop_back();
       solve(i+1,arr,temp,target,ans);
      
    }
public:
    vector<vector<int>> combinationSum(vector<int>& arr, int target) { 
        vector<int> temp;
        vector<vector<int> > ans;
        solve(0, arr, temp, target,ans);
        return ans;
    }
};

class Solution {
void solve(int ind, vector<int>& arr, vector<int>& temp, int target,vector<vector<int> > &ans) {
       if(target==0)
       {
         ans.push_back(temp);
         return;
       }
      for(int i=ind;i<arr.size();i++)
      {

         if(i>ind && arr[i]==arr[i-1]) continue;
         if(arr[i]>target) break;

         temp.push_back(arr[i]);
         solve(i+1,arr,temp,target-arr[i],ans);
       
         temp.pop_back();
      }
      
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) { 
        vector<int> temp;
        sort(arr.begin(),arr.end());
    
        vector<vector<int> > ans;
        solve(0, arr, temp, target,ans);
        return ans;
    }
};

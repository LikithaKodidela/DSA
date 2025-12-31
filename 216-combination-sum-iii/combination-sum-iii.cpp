class Solution {
    void backtrack(int k,int n,int ind,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ds.size()==k && n==0)
        {
            ans.push_back(ds);
            return;
        }
        if(ds.size()>k||n<0) return;
        for(int i=ind;i<arr.size();i++)
        {
            if(n-arr[i]<0) break;
            ds.push_back(arr[i]);
            backtrack(k,n-arr[i],i+1,arr,ds,ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr;
        vector<vector<int>> ans;
        vector<int> ds;
        for(int i=1;i<10;i++)
        {
            arr.push_back(i);
        }
        backtrack(k,n,0,arr,ds,ans);
        return ans;
    }
};
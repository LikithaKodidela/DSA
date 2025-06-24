class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) 
    {
        vector<int> res;
        int n=arr.size();
        unordered_map<int,int> mpp;
        int mini=(n/3)+1;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
            if(mpp[arr[i]]==mini)
            {
                res.push_back(arr[i]);
            }
            if(res.size()==2)
            {
                break;
            }
        }
        return res;
    }
};
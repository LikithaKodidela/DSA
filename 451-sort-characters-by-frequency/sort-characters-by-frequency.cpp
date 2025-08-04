class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        string ans="";
        for(char ch:s)
        {
            mpp[ch]++;
        }
        vector<pair<char,int>> freq(mpp.begin(),mpp.end());
        sort(freq.begin(),freq.end(),[](auto &a ,auto &b){
            return a.second>b.second;
        });
        for(auto &it : freq)
        {
             int n=it.second;
             while(n>0)
             {
                 ans.push_back(it.first);
                 n--;
             }
        }
        return ans;
    }
};
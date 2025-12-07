class Solution {
    bool checkChars(string &str1,string &str2)
    {
       if(str1.size()!=str2.size()) return false;

       vector<int> freq(26,0);

       for(char c:str1) freq[c-'a']++;
       for(char c:str2) freq[c-'a']--;

       for(int x:freq)
       {
         if(x!=0) return false;
       }
       return true;

    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> ans;
        vector<bool> used(n,false);

        for(int i=0;i<n;i++)
        {
           if(used[i]) continue;
           vector<string> group;
           group.push_back(strs[i]);
           used[i]=true;
           for(int j=i+1;j<n;j++)
           {
             if(!used[j]&& checkChars(strs[i],strs[j]))
             {
                group.push_back(strs[j]);
                used[j]=true;
             }
           }
           ans.push_back(group);
        }
        return ans;
    }
};
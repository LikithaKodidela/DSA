class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int ind=-1;
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[n-1];
        int minSize=min(first.length(),last.length());
        for(int i=0;i<minSize;i++)
        {
            if(first[i]!=last[i])
            {
                ind=i;
                break;
            }
        }
        return first.substr(0,ind);
    }
       
};
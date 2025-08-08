class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
       unordered_map<char,int> Smap;
       unordered_map<char,int> Tmap;
       for(int i =0;i<s.length();i++)
       {
            if(Smap.find(s[i])==Smap.end())
            {
                Smap[s[i]]=i;
            }
            if(Tmap.find(t[i])==Tmap.end())
            {
                Tmap[t[i]]=i;
            }
            if(Smap[s[i]]!=Tmap[t[i]])
            {
                return false;
            }
       }
       return true;
    }
};
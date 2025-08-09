class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int> Smap;
        unordered_map<char,int> Tmap;
        for(int i=0;i<s.length();i++)
        {
            Smap[s[i]]++;
            Tmap[t[i]]++;
        }
        for(auto &it:Smap)
        {
            if(Tmap.find(it.first)==Tmap.end()||Tmap[it.first]!=it.second)
            {
               return false;
            }
        }
        return true;
    }
};
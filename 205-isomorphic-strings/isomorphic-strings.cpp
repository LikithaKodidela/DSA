class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> mapST; // s → t
        unordered_map<char, char> mapTS; // t → s

        for (int i = 0; i < s.length(); ++i) {
            char sc = s[i];
            char tc = t[i];

            // Check s → t mapping
            if (mapST.count(sc) && mapST[sc] != tc) return false;
            // Check t → s mapping
            if (mapTS.count(tc) && mapTS[tc] != sc) return false;

            mapST[sc] = tc;
            mapTS[tc] = sc;
        }
        return true;
    }
};

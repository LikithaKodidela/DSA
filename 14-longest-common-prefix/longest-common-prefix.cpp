class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        {
            return "";
        }
       /* string prefix=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            int j=0;
            while(j<prefix.length()&& j<strs[i].length()&& prefix[j]==strs[i][j])
            {
                j++;
            }
            prefix=prefix.substr(0,j);
            if(prefix.empty())
            {
                return "";
            }
        }
        return prefix;
    }*/
    string prefix = "";

        for (int i = 0; i < strs[0].length(); i++) {
            char currentChar = strs[0][i];
            
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].length() || strs[j][i] != currentChar) {
                    return prefix;
                }
            }

            prefix += currentChar;
        }

        return prefix;
    }
};
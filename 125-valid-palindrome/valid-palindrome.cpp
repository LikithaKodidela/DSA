class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
       /* for(int i=0;i< s.length();i++)
        {
            char c=s[i];
            if((c>='a'&&c<='z')||(c>='A'&&c<='Z') || (c>='0'&& c<='9'))
            {
                if(c>='A'&&c<='Z')
                {
                    c+=32;
                }
                str+=c;
            }
        }
       string revstr=str;
       std::reverse(revstr.begin(),revstr.end());
        return (revstr==str);*/
        for(int i=0;i< s.length();i++)
        {
            char c=s[i];
            if(isalnum(c))
            {
                str+=tolower(c);
            }
        }
        string revstr=str;
        std::reverse(revstr.begin(),revstr.end());
        return (revstr==str);
    }
};
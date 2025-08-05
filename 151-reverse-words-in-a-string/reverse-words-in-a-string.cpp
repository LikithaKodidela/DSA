class Solution {
public:
    string reverseWords(string s) {
       int n=s.length();
       string ans="";
       reverse(s.begin(),s.end());
       for(int i=0;i<n;i++)
       {
         string word="";
         while(i<n && s[i]!=' ')
         {
            word+=s[i];
            i++;
         }
         reverse(word.begin(),word.end());
         if(word.length()>0) //to make sure no empty string or invalid string added to the word
         {
            ans+=" "+word;
         }
       }
       return ans.substr(1);
    }
};
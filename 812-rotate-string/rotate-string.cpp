class Solution {
public:
   void Shift(string &s)
   {
      int n=s.length();
      char ele=s[0];
      for(int i=1;i<n;i++)
      {
        s[i-1]=s[i];
      }
      s[n-1]=ele;
      
   }
    bool rotateString(string s, string goal) {
        int n=goal.length();
        for(int i=0;i<n;i++)
        {
            Shift(s);
            if(s==goal)
            {
                return true;
            }
        }
        return false;
    }
};
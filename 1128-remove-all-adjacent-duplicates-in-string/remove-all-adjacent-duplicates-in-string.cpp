class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        /*st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(!st.empty()&& st.top()==s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }*/
        for(char c:s)
        {
            if(!st.empty()&& st.top()==c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        string result;
        while(!st.empty())
        {
          result+=st.top();
          st.pop();   
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};
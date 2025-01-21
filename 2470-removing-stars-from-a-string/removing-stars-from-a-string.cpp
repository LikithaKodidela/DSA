class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string str;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='*')
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
           str+= st.top();
           st.pop();
        }
        std::reverse(str.begin(),str.end());
        return str;
    }
};
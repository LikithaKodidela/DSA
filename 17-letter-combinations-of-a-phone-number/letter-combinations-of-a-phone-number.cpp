class Solution {
    void solve(int idx,string &digits,string combos[],vector<string>&ans,string &curr_str)
    {
        if(idx==digits.size())
        {
            ans.push_back(curr_str);
            return;
        }
        int digit = digits[idx] - '0';
         for(int i = 0; i < combos[digit].size(); i++) 
        {
            curr_str+=combos[digit][i];
            solve(idx+1,digits,combos,ans,curr_str);
            curr_str.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        string combos[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        string curr_str="";
        solve(0,digits,combos,ans,curr_str);
        return ans;
    }
};
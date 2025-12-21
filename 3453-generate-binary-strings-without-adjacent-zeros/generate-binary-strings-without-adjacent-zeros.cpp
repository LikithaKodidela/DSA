class Solution {
    void generate(int n,string curr,vector<string> &res)
    {
        if(curr.length()==n)
        {
            res.push_back(curr);
            return;
        }
        generate(n,curr+"1",res);
        if(curr.empty()||curr.back()!='0')
        {
            generate(n,curr+"0",res);
        }
    }
public:
    vector<string> validStrings(int n) {
        vector<string> res;
        string curr="";
        generate(n,curr,res);
        return res;
    }
};
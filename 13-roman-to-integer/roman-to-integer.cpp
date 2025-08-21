class Solution {
public:
    int romanToInt(string str) {
        unordered_map<char,int> roman={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int res=0;
        int n=str.length();
        for(int i=0;i<n-1;i++)
        {
            if(roman[str[i]]<roman[str[i+1]])
            {
                res-=roman[str[i]];
            }
            else
            {
                res+=roman[str[i]];
            }
        }
        return res+roman[str[n-1]];

    }
};
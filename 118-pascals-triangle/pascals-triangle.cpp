class Solution {
private:
vector<int> GenerateRow(int row)
{
    long long ans=1;
    vector<int> res;
    res.push_back(ans);
    for(int col=1;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/col;
        res.push_back(ans);
    }
    return res;
}
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows+1;
        vector<vector<int>> ans;
        for(int row=1;row<n;row++)
        {
            vector<int>temp=GenerateRow(row);
            ans.push_back(temp);
        }
        return ans;
    }
};
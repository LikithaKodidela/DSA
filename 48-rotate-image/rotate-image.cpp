class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.empty()||matrix[0].empty())return;

        int n=matrix.size();
       
        for(int i=0;i<=n-2;i++)
        {
            for(int j=i+1;j<=n-1;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
         for(int j=0;j<n;j++)
        {
            reverse(matrix[j].begin(),matrix[j].end());
        }
    }
};
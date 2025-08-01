class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.empty()||matrix[0].empty())return;

        int n=matrix.size();
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
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
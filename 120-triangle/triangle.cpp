class Solution {
    int solve(int i,int j,vector<vector<int>> &triangle,vector<vector<int>> &dp)
    {
        if(i==triangle.size()-1)
        {
            return triangle[i][j];
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int down = triangle[i][j] +  solve(i+1,j,triangle,dp);
        int diagonal = triangle[i][j] +  solve(i+1,j+1,triangle,dp);
        return dp[i][j]=min(down,diagonal);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> front(n,0);

        for(int j=0;j<n;j++)
        {
            front[j] = triangle[n-1][j];
        }

        for(int i=n-2;i>=0;i--)
        {
            vector<int> curr(n,0);
            for(int j=i;j>=0;j--)
            {
                int down = triangle[i][j] + front[j];
                int diagonal = triangle[i][j] + front[j+1];
                curr[j] = min(down,diagonal);
            }
            front = curr;
        }
        return front[0];
    }
};
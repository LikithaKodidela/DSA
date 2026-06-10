class Solution {
    int solve(int i ,int j ,vector<vector<int>> &grid,vector<vector<int>> &dp)
    {
        if(i==0 && j==0) return grid[0][0];
        if(i<0 || j<0) return 1e9;
        if (dp[i][j]!=-1) return dp[i][j];
        
        int up = solve(i-1,j,grid,dp);
        int left = solve(i,j-1,grid,dp);
        return dp[i][j] = grid[i][j]+min(up,left);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> prev(n,0);
        
        for(int i=0;i<m;i++)
        {
            vector<int> curr(n,0);
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0 )
                {
                    curr[j] = grid[0][0];
                    continue;
                }
                int up=1e9,left=1e9;
                if(i > 0) up=prev[j];
                if(j > 0) left=curr[j-1];
                curr[j] = grid[i][j]+ min(up,left);
            }
            prev=curr;
        }
        return prev[n-1];
    }
};
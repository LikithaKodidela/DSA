class Solution {
    int solve(int i,int j,int m,int n,vector<vector<int>> &dp)
    {
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j >=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int down = solve(i+1,j,m,n,dp);
        int right= solve(i,j+1,m,n,dp);
        return dp[i][j]=down+right;
    }
public:
    int uniquePaths(int m, int n) {

        vector<int> prev(n,0);

        // Destination
        prev[0] = 1;

        for(int i=0;i<m;i++)
        {
            vector<int> curr(n,0);
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0 )
                {
                    curr[j]=1;
                    continue;
                } 
                int up=prev[j];
                int left=0;
                if(j>0) left = curr[j-1];
                curr[j] = left + up ;
            }
            prev = curr;
        }
        return prev[n-1];
    }
};
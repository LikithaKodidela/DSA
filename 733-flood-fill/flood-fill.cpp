class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int initial = image[sr][sc];
        if(initial == color) return image;

        vector<vector<int>> ans = image;

        queue<pair<int,int>> q;
        q.push({sr,sc});

        int dcol[] = {0,1,0,-1};
        int drow[] = {-1,0,1,0};
        ans[sr][sc] = color;

        while(!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i=0;i<4;i++)
            {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && ans[nrow][ncol]==initial)
                {
                    ans[nrow][ncol]=color;
                    q.push({nrow,ncol});
                }
            }
        }

        return ans;
    }
};  
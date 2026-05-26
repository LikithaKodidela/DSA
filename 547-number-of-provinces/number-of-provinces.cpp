class Solution {
public:
    void dfs(int node,vector<int> adj[],vector<int> &visited)
    {
          visited[node]=1;
          for(auto &it: adj[node])
          {
               if(!visited[it])
               {
                dfs(it,adj,visited);
               }
          }
    }
    void bfs(int start,vector<int> adj[],vector<int> &visited)
    {
        visited[start] = 1;
        queue<int> q;
        q.push(start);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            for(auto it : adj[node])
            {
                if(!visited[it])
                {
                    visited[it]=1;
                    q.push(it);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> visited(n,0);
        vector<int> adj[n];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int provinces = 0;

        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                bfs(i,adj,visited);
                provinces++;
            }
        }
        return provinces;
    }
};
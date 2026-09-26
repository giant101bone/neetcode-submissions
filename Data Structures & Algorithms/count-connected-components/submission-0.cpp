class Solution {
public:
    void DFS(vector<bool> &vis , int node , vector<vector<int>> &adj )
    {
        vis[node] = 1 ;
        for(auto x : adj[node])
        {
            if(!vis[x])
            {
                DFS(vis , x , adj) ;
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n) ;
        for(auto x: edges )
        {
            adj[x[0]].push_back(x[1]) ;
            adj[x[1]].push_back(x[0]) ;
        }
        vector<bool> vis(n,0);
        int c = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            if(!vis[i])
            {
                DFS(vis , i ,adj ) ;
                c += 1;
            }
        }
        return  c ;

    }
};

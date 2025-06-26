class Solution {
public:
    bool dfs(vector<vector<int>>& adj,int s,int d,vector<bool>& vis){
        if(s==d) return true;
        vis[s]=true;
        for(int x:adj[s]){
            if(vis[x]) continue;
            if(dfs(adj,x,d,vis))return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<bool> vis(n,false);
        return dfs(adj,source,destination,vis);
    }
};

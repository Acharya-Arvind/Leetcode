class Solution {
public:
bool dfs(vector<vector<int>>& adj,int V,int node,vector<bool>& vis,vector<bool>& path){
    vis[node]=true;
    path[node]=true;
    for(int x:adj[node]){
        if(!vis[x] && dfs(adj,V,x,vis,path)) return true;
        if(path[x]) return true;
    }
    path[node]=false;
    return false;
}
    bool canFinish(int V, vector<vector<int>>& nums) {
        vector<vector<int>> adj(V);
        for(int i=0;i<nums.size();i++){
            adj[nums[i][0]].push_back(nums[i][1]);
        }
        vector<bool> vis(V,false);
        vector<bool> path(V,false);
        for(int i=0;i<V;i++){
            if(vis[i]==1) continue;
            if(dfs(adj,V,i,vis,path)) return false;
        }
        return true;
    }
};

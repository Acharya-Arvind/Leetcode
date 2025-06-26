class Solution {
public:
    bool dfs(vector<int>& ans,vector<vector<int>>& adj,int node,vector<bool>& vis,vector<bool>& path){
        vis[node]=true;
    path[node]=true;
    for(int x:adj[node]){
        if(!vis[x] && dfs(ans,adj,x,vis,path)) return true;
        if(path[x]) return true;
    }
    path[node]=false;
    ans.push_back(node);
    return false;
    }
    vector<int> findOrder(int V, vector<vector<int>>& nums) {
       vector<vector<int>> adj(V);
       vector<int> ans;
        for(int i=0;i<nums.size();i++){
            adj[nums[i][0]].push_back(nums[i][1]);
        }
        vector<bool> vis(V,false);
        vector<bool> path(V,false);
        for(int i=0;i<V;i++){
            if(vis[i]==1) continue;
            if(dfs(ans,adj,i,vis,path)) return {};
        }
        return ans;
    }
};

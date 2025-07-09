class Solution {
public:
int res=-1;
    bool findcycle(int node,vector<int>& edge,int cur,vector<int>& vis,vector<int>& path){
        if(node==-1) return false;
        if(vis[node]==1){
            // cout<<node<<"->"<<cur<<endl;
            res=max(res,cur-path[node]);
            return true;
        }
        if(vis[node]==2) return false;
        vis[node]=1;
        path[node]=cur;
        bool found=findcycle(edge[node],edge,cur+1,vis,path);
        vis[node]=2;
        return found;
    }
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int> indeg(n,0);
        
        for(int i=0;i<n;i++){
            if(edges[i]!=-1)
            indeg[edges[i]]++;
        }
        vector<int> vis(n,0);
        vector<int> path(n,0);
        for(int i=0;i<n;i++){
                int cur=0;
                if(!vis[i])
                findcycle(i,edges,cur,vis,path);
        }
        return res;
    }
};

class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& vis,int count,int& ans,int wall){
        if(grid[i][j]==-1 || vis[i][j]) return;
        if(grid[i][j]==2){
            if(count==(m*n)-wall) ans++;
            return;
        }
        vis[i][j]=1;
        if(i>0) dfs(i-1,j,m,n,grid,vis,count+1,ans,wall);
        if(j>0) dfs(i,j-1,m,n,grid,vis,count+1,ans,wall);
        if(i<m-1) dfs(i+1,j,m,n,grid,vis,count+1,ans,wall);
        if(j<n-1) dfs(i,j+1,m,n,grid,vis,count+1,ans,wall);
        vis[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        pair<int,int> start,end;
        int wall=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) start={i,j};
                else if(grid[i][j]==-1) wall++;
            }
        }
        int ans=0;
        dfs(start.first,start.second,m,n,grid,vis,1,ans,wall);
        return ans;
    }
};

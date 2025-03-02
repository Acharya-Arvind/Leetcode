class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int ans=0;
        int r[]={-1,0,1,0};
        int c[]={0,-1,0,1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int time=q.front().second;
            q.pop();
            ans=max(ans,time);
            for(int k=0;k<4;k++){
                int i=row+r[k];
                int j=col+c[k];
                if(i>=0 && i<m && j>=0 && j<n && vis[i][j]!=1 && grid[i][j]==1){
                    q.push({{i,j},time+1});
                    vis[i][j]=1;
                    grid[i][j]=2;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return ans;
    }
};

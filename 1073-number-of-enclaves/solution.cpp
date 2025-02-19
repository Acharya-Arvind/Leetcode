class Solution {
public:
    void solve(vector<vector<int>>& grid,int i,int j,int m,int n){
        if(grid[i][j]==0) return;
        grid[i][j]=0;
        if(i>0 && grid[i-1][j]==1) solve(grid,i-1,j,m,n);
        if(j>0 && grid[i][j-1]==1) solve(grid,i,j-1,m,n);
        if(i<m-1 && grid[i+1][j]==1) solve(grid,i+1,j,m,n);
        if(j<n-1 && grid[i][j+1]==1) solve(grid,i,j+1,m,n);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0 || i==m-1 || j==n-1) && grid[i][j]==1){
                    solve(grid,i,j,m,n);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) ans++;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int solve(vector<vector<char>>& grid,vector<vector<int>>& dp,int i,int j,int m,int n){
        if(i<0 || i==m || j<0 || j==n|| grid[i][j]=='0') return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        grid[i][j]='0';
        return dp[i][j]=1+solve(grid,dp,i-1,j,m,n)+solve(grid,dp,i,j-1,m,n)+solve(grid,dp,i+1,j,m,n)+solve(grid,dp,i,j+1,m,n);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    if(solve(grid,dp,i,j,m,n)>=1) ans++;
                }
            }
        }
        return ans;
    }
};

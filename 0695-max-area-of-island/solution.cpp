class Solution {
public:
    int dpro(vector<vector<int>>& grid,vector<vector<int>>& dp,int i,int j,int m,int n){
        if(grid[i][j]==0) return 0;
        dp[i][j]=1;
        int left=0,right=0,top=0,bottom=0;
        if(j>0 && dp[i][j-1]==0)   left=dpro(grid,dp,i,j-1,m,n);
        if(i<m-1 && dp[i+1][j]==0)   bottom=dpro(grid,dp,i+1,j,m,n);
        if(j<n-1 && dp[i][j+1]==0)   right=dpro(grid,dp,i,j+1,m,n);
        if(i>0 && dp[i-1][j]==0)   top=dpro(grid,dp,i-1,j,m,n);
        return top+bottom+left+right+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int res=dpro(grid,dp,i,j,m,n);
                    ans=max(res,ans);
                }
            }
        }
        return ans;
    }
};

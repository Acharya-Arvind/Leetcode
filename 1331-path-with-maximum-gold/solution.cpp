class Solution {
public:
    int solve(vector<vector<int>>& grid,vector<vector<bool>>& dp,int i,int j,int m,int n){

        if(i<0 || j<0 || i==m || j==n || dp[i][j] || grid[i][j]==0) return 0;
        dp[i][j]=true;
        int left=solve(grid,dp,i,j-1,m,n);
        int right=solve(grid,dp,i,j+1,m,n);
        int top=solve(grid,dp,i-1,j,m,n);
        int bottom=solve(grid,dp,i+1,j,m,n);
        dp[i][j]=false;
        int res=max(max(left,right),max(top,bottom));
        return res+grid[i][j];
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    vector<vector<bool>> dp(m,vector<bool>(n,false));
                    ans=max(ans,solve(grid,dp,i,j,m,n));
                }
            }
        }
        return ans;
    }
};

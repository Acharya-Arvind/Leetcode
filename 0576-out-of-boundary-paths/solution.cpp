class Solution {
public:
    int MOD = 1e9 + 7;
    int logic(int m,int n,int move,int i,int j,vector<vector<vector<int>>>& dp){
        if(move<0) return 0;
        if(i<0 || j<0 || i==m || j==n) return 1;
        if(dp[i][j][move]!=-1) return dp[i][j][move];
        int a=0,b=0,c=0,d=0;
        a=logic(m,n,move-1,i+1,j,dp);
        b=logic(m,n,move-1,i-1,j,dp);
        c=logic(m,n,move-1,i,j+1,dp);
        d=logic(m,n,move-1,i,j-1,dp);
        return dp[i][j][move] = ((a + b) % MOD + (c + d) % MOD) % MOD;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
      vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int> (maxMove+1,-1)));
      return logic(m,n,maxMove,startRow,startColumn,dp);  
    }
};

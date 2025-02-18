class Solution {
public:
    void dpro(vector<vector<char>>& board,vector<vector<int>>& dp,int i,int j,int m,int n){
            if(board[i][j]=='X') return;
            dp[i][j]=1;
            if(i>0 && dp[i-1][j]==0) dpro(board,dp,i-1,j,m,n);
            if(j>0 && dp[i][j-1]==0) dpro(board,dp,i,j-1,m,n);
            if(i<m-1 && dp[i+1][j]==0) dpro(board,dp,i+1,j,m,n);
            if(j<n-1 && dp[i][j+1]==0) dpro(board,dp,i,j+1,m,n);
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && (i==0 || j==0 || i==m-1 || j==n-1)){
                    dpro(board,dp,i,j,m,n);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j]==1) board[i][j]='O';
                else board[i][j]='X';
            }
        }
    }
};

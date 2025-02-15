class Solution {
public:
    bool check(int i,int j,vector<vector<char>>& board,vector<vector<int>>& dp,int m,int n,string s){
        if(s=="") return true;
        dp[i][j]=1;
        if(j>0 && dp[i][j-1]==0 && board[i][j-1]==s[0]){
            if(check(i,j-1,board,dp,m,n,s.substr(1))) return true;
        }
        if(i>0 && dp[i-1][j]==0 && board[i-1][j]==s[0]){
            if(check(i-1,j,board,dp,m,n,s.substr(1))) return true;
        }
        if(i<m-1 && dp[i+1][j]==0 && board[i+1][j]==s[0]){
            if(check(i+1,j,board,dp,m,n,s.substr(1))) return true;
        }
        if(j<n-1 && dp[i][j+1]==0 && board[i][j+1]==s[0]){
            if(check(i,j+1,board,dp,m,n,s.substr(1))) return true;
        }
    dp[i][j]=0;
    return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(check(i,j,board,dp,m,n,word.substr(1))) return true;
                }
            }
        }
        return false;
    }
};

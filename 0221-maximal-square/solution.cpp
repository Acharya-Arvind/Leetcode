class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!i || !j || matrix[i][j]=='0'){
                    dp[i][j]=matrix[i][j]-'0';
                    ans=max(ans,dp[i][j]);
                }
                else{
                dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                 ans=max(ans,dp[i][j]);
             }
            }
           
        }
        return ans*ans;
    }
};

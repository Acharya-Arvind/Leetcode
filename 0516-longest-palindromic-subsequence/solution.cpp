class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int m=s.length();
        vector<vector<int>> dp(m+1,vector<int> (m+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==s[m-j]) dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        // for(int i=0;i<=m;i++){
        //     for(int j=0;j<=m;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[m][m];
    }
};

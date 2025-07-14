class Solution {
public:
    string longestPalindrome(string s) {
        int m=s.length();
        string ans;
        int maxi=0;
        vector<vector<int>> dp(m+1,vector<int> (m+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                if (s[i - 1] == s[m-j]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    int origStart = i - dp[i][j];          
                    int revStart = m - j;                 
                    if (origStart == revStart) {     
                        if (dp[i][j] > maxi) {
                            maxi = dp[i][j];
                            ans = s.substr(origStart, maxi);
                        }
                    }
                }
            }
        }
        return ans;
    }
};

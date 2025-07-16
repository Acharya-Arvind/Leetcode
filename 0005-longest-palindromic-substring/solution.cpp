class Solution {
public:
    string longestPalindrome(string s) {
        int m=s.length();
        int start=0;
        int end=0;
        int maxi=0;
        vector<vector<int>> dp(m,vector<int> (m,0));
        for(int i=0;i<m;i++) dp[i][i]=1;
        for(int i=0;i<m-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                start=i;
                end=i+1;
                maxi=2;
            }
        }
        for(int i=3;i<=m;i++){
            for(int j=0;j<=m-i;j++){
                if(s[j]==s[j+i-1] && dp[j+1][j+i-2]==1){
                    dp[j][j+i-1]=1;
                    if(maxi<i){
                        maxi=i;
                        start=j;
                        end=j+i-1;
                    }
                }
            }
        }
        // cout<<start<<" "<<end;
        return s.substr(start,end-start+1);
    }
};

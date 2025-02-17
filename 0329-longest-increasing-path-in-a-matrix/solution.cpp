class Solution {
public:
    int dynamicProgramming(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>& dp,int m,int n){
        if(dp[i][j]!=0) return dp[i][j];
        dp[i][j]=1;
        int top=0,left=0,right=0,bottom=0;
        if(i>0 && matrix[i][j]<matrix[i-1][j]){
            top=1+dynamicProgramming(matrix,i-1,j,dp,m,n);
        }
        if(j>0 && matrix[i][j]<matrix[i][j-1]){
            left=1+dynamicProgramming(matrix,i,j-1,dp,m,n);
        }
        if(i<m-1 && matrix[i][j]<matrix[i+1][j]){
            bottom=1+dynamicProgramming(matrix,i+1,j,dp,m,n);
        }
        if(j<n-1 && matrix[i][j]<matrix[i][j+1]){
            right=1+dynamicProgramming(matrix,i,j+1,dp,m,n);
        }
        return dp[i][j]=max({dp[i][j],top,bottom,left,right});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){ 
                int ans=dynamicProgramming(matrix,i,j,dp,m,n);
                res=max(ans,res);
            }
        }
        return res;
    }
};


class Solution {
public:
    void solve(vector<vector<int>>& g,int i,int j,int m,int n){
        if(g[i][j]==1) return;
        g[i][j]=1;
        if(i>0 && g[i-1][j]==0) solve(g,i-1,j,m,n);
        if(j>0 && g[i][j-1]==0) solve(g,i,j-1,m,n);
        if(i<m-1 && g[i+1][j]==0) solve(g,i+1,j,m,n);
        if(j<n-1 && g[i][j+1]==0) solve(g,i,j+1,m,n);
    }
    int closedIsland(vector<vector<int>>& g) {
        int m=g.size();
        int n=g[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0 || i==m-1 || j==n-1) && g[i][j]==0){
                solve(g,i,j,m,n);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]==0){
                solve(g,i,j,m,n);
                ans++;
                }
            }
        }
        return ans;
    }
};

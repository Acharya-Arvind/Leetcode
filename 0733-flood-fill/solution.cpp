class Solution {
public:
    void solve(vector<vector<int>>& vis,vector<vector<int>>& image,int i,int j,int c,int ac,int m,int n){
        if(vis[i][j]==1) return;
        vis[i][j]=1;
        image[i][j]=c;
        if(i>0 && vis[i-1][j]==0 && image[i-1][j]==ac){
            solve(vis,image,i-1,j,c,ac,m,n);
        }
        if(j>0 && vis[i][j-1]==0 && image[i][j-1]==ac){
            solve(vis,image,i,j-1,c,ac,m,n);
        }
        if(i<m-1 && vis[i+1][j]==0 && image[i+1][j]==ac){
            solve(vis,image,i+1,j,c,ac,m,n);
        }
        if(j<n-1 && vis[i][j+1]==0 && image[i][j+1]==ac){
            solve(vis,image,i,j+1,c,ac,m,n);
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int ac=image[sr][sc];
        solve(vis,image,sr,sc,color,ac,m,n);
        return image;
    }
};

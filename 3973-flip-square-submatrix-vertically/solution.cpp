class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> mat(m,vector<int> (n));
        for(int i=x;i<x+k;i++){
            for(int j=y;j<y+k;j++){
                mat[k-1-(i-x)][j-y]=grid[i][j];
            }
        }
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                grid[x+i][y+j]=mat[i][j];
            }
            cout<<endl;
        }
        return grid;
    }
};

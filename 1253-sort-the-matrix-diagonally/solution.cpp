class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size(); 
        if(n==1 || m==1) return grid;
        int i=0,j=1;
        int count=1;
        vector<int> ans;
        while(!(i==0 && j==n)){
            ans.push_back(grid[i][j]);
            i++;
            j++;
            if(j==n || i==m){
                sort(ans.begin(),ans.end());
                int num=0;
                for(int row=0,col=count;row<ans.size();row++,col++){
                    grid[row][col]=ans[num++];
                }
                ans.clear();
                i=0;
                count++;
                j=count;
            }
        }
        i=0,j=0;
        count=0;
        while(!(i==m && j==0)){
            ans.push_back(grid[i][j]);
            i++;
            j++;
            if(i==m ||j ==n){
                sort(ans.begin(),ans.end());
                int num=0;
                for(int row=count,col=0;col<ans.size();row++,col++){
                    grid[row][col]=ans[num++];
                }
                ans.clear();
                j=0;
                count++;
                i=count;
            }
        }
        cout<<ans.size();
        
        return grid;
    }
};

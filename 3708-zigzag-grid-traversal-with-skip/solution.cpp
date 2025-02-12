class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        int i=0,j=0;
        while(i<grid.size()){
            ans.push_back(grid[i][j]);
            if(i%2==0){
            if(j==grid[0].size()-1){
                j--;
                i++;
            }
            else if(j==grid[0].size()-2){
                j++;
                i++;
            }
            else{
                j+=2;
            }
            }
            else{
                if(j==0){
                    j++;
                    i++;
                }
                else if(j==1){
                    j--;
                    i++;
                }
                else{
                    j-=2;
                }
            }
        }
        return ans;
    }
};

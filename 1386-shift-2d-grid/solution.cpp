class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        for(int i=0;i<k;i++){
            v.insert(v.begin(),v[v.size()-1]);
            v.erase(v.end()-1);
        }
        int n=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]=v[n++];
            }
        }
        return grid;
    }
};

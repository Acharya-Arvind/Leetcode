class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<pair<int,int>>> mat(rows,vector<pair<int,int>> (cols));
        vector<vector<int>> ans;
        map<int,vector<pair<int,int>>> mp;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                mat[i][j]={i,j};
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                mp[abs(mat[i][j].first-mat[rCenter][cCenter].first)+abs(mat[i][j].second-mat[rCenter][cCenter].second)].push_back({mat[i][j].first,mat[i][j].second});
            }
        }
        for(auto x:mp){
            for(int i=0;i<x.second.size();i++){
                ans.push_back({x.second[i].first,x.second[i].second});
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mp[grid[i][j]]++;
            }
        }
        int a=0,b=0;
        for(auto it:mp){
            if(it.second!=1){
                a=it.first;
                break;
            }
        }
        int ind=1;
        for(auto it:mp){
            
            if(it.first!=ind){
                b=ind;
                break;
            }
            ind++;
        }
        if(ind==mp.size()+1) b=ind;
        return {a,b};
    }
};

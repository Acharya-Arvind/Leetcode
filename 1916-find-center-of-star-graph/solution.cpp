class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        int maxi=0;
        int ans;
        for(auto x:mp){
            if(maxi<x.second){
                ans=x.first;
                maxi=x.second;
            }
        }
        return ans;
    }
};

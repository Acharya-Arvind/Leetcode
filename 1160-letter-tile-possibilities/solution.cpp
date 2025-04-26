class Solution {
public:
    void backtrack(int& ans,string tiles,int ind,int n,vector<bool> vis){
        if(ind>=n) return;
            ans++;
        for(int i=0;i<n;i++){
            if(vis[i] || (i>0 && tiles[i-1]==tiles[i] && !vis[i-1])) continue;
             vis[i]=true;
            backtrack(ans,tiles,i,n,vis);
            vis[i]=false;
            
        }
    }
    int numTilePossibilities(string tiles) {
        int ans=0;
        vector<bool> vis(tiles.length(),false);
        sort(tiles.begin(),tiles.end());
        backtrack(ans,tiles,0,tiles.length(),vis);
        return ans-1;
    }
};

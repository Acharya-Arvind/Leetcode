class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> inorder(n);
        vector<vector<int>> ans;
        for(auto x:edges){
            inorder[x[1]].push_back(x[0]);
        }
        for(int i=0;i<n;i++){
            set<int> res;
            vector<bool> vis(n,false);
           solve(inorder,i,res,vis);
           ans.push_back(vector<int> (res.begin(),res.end()));
        }
        return ans;
    }
    void solve(vector<vector<int>>& inorder,int i,set<int>& res,vector<bool>& vis){
        if(vis[i]) return;
        vis[i]=true;
        for(int j:inorder[i]){
            res.insert(j);
            solve(inorder,j,res,vis);
        }
    }
};

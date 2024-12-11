class Solution {
public:
    void backtrack(int n,int k,vector<vector<int>>& ans,int ind,vector<int> res){
        if(res.size()==k){
            ans.push_back(res);
            return;
        }
        for(int i=ind;i<=n;i++){
            res.push_back(i);
            backtrack(n,k,ans,i+1,res);
            res.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        backtrack(n,k,ans,1,{});
        return ans;
    }
};

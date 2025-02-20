class Solution {
public:
    void backtrack(vector<vector<int>>& ans,int k,int n,int ind,vector<int> res){
        if(res.size()==k){
            if(n==0) ans.push_back(res);
            return;
        }
        for(int i=ind;i<=9;i++){
            res.push_back(i);
            if(n-i<0) continue;
            backtrack(ans,k,n-i,i+1,res);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        backtrack(ans,k,n,1,{});
        return ans;
    }
};

class Solution {
public:
    void backtrack(vector<vector<int>>& ans,vector<vector<int>>& graph,int ind,vector<int> res){
        if(ind==graph.size()-1){
        ans.push_back(res);
        return;
        }
        for(int i=0;i<graph[ind].size();i++){
            res.push_back(graph[ind][i]);
            backtrack(ans,graph,graph[ind][i],res);
            res.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        backtrack(ans,graph,0,{0});
        return ans;
    }
};

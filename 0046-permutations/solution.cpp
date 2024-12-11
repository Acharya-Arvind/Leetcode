class Solution {
public:
    void backtrack(vector<vector<int>>& ans,vector<int>& nums,unordered_map<int,bool> visited,vector<int> res){
        if(res.size()==nums.size()){
            ans.push_back(res);
            return;
        }
        for(int j=0;j<nums.size();j++){
        if(visited[j]==true) continue;
            visited[j]=true;
            res.push_back(nums[j]);
            backtrack(ans,nums,visited,res);
            res.pop_back();
            visited[j]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,bool> visited;
        for(int i=0;i<nums.size();i++){
            visited[i]=false;
        }
        backtrack(ans,nums,visited,{});
        return ans;
    }
};

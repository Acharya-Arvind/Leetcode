class Solution {
public:
    void backtrack(vector<vector<int>>& ans,vector<int>& nums,unordered_map<int,bool> visit,vector<int> res){
        if(res.size()==nums.size()){
            ans.push_back(res);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(visit[i]) continue;
            if(i>0 && nums[i-1]==nums[i] && visit[i-1]==false) continue;
            visit[i]=true;
            res.push_back(nums[i]);
            backtrack(ans,nums,visit,res);
            res.pop_back();
            visit[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        unordered_map<int,bool> visit;
        for(int i=0;i<nums.size();i++){
            visit[i]=false;
        }
        backtrack(ans,nums,visit,{});
        return ans;
    }
};

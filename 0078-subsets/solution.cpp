class Solution {
public:
    void backtrack(vector<int>& nums,vector<vector<int>>& ans,int ind,vector<int> res){
        if(ind>=nums.size()){
            return;
        }
        for(int i=ind;i<nums.size();i++){
            res.push_back(nums[i]);
            ans.push_back(res);
            backtrack(nums,ans,i+1,res);
            res.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        backtrack(nums,ans,0,{});
        return ans;
    }
};

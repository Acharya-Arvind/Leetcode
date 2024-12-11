class Solution {
public:
    void backtrack(vector<vector<int>>& ans, vector<int>& nums, int target, int start, vector<int> res) {
        if (target == 0) {
            ans.push_back(res);
            return;
        }
        
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) continue;
            if (nums[i] > target) continue;
            res.push_back(nums[i]);
            backtrack(ans, nums, target - nums[i], i+1, res);
            res.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        backtrack(ans, candidates, target, 0, {});  
        return ans;
    }
};


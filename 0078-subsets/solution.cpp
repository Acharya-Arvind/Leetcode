class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> result;
        ans.push_back(result);
    
        for (int i = 0; i < nums.size(); i++) {
            int size = ans.size();
            for (int j = 0; j < size; j++) {
                result = ans[j];        
                result.push_back(nums[i]); 
                ans.push_back(result); 
            }
        }
        
        return ans;
    }
};


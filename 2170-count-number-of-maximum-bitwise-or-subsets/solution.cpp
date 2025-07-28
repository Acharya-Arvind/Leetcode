class Solution {
public:
    void backtrack(vector<int>& nums,int ind,unordered_map<int,int>& mp,int sum){
        for(int i=ind;i<nums.size();i++){
            backtrack(nums,i+1,mp,sum|nums[i]);
            mp[(sum|nums[i])]++;
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mp;
        int sum=0;
        backtrack(nums,0,mp,sum);
        for(auto& x:mp){
            if(x.second>ans){
                ans=x.second;
            }
        }
        return ans;
    }
};

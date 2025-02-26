class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0;
        int mini=0,maxi=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mini=min(sum,mini);
            maxi=max(sum,maxi);
        }
        return abs(maxi-mini);
    }
};

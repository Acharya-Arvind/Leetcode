class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi=0,mini=0,maxii=nums[0],minii=nums[0];
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           maxi=max(maxi+nums[i],nums[i]);
           maxii=max(maxii,maxi);
           mini=min(mini+nums[i],nums[i]);
           minii=min(mini,minii);
           sum+=nums[i];
        }
        return maxii>0?max(maxii,sum-minii):maxii;
    }
};

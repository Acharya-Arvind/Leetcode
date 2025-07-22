class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        vector<bool> mp(10001,false);
        int sum=0;
        int len=0;
        int ans=0;
        int i=0,j=0,n=nums.size();
        while(j<n){
            while(mp[nums[j]]!=false){
                sum-=nums[i];
                mp[nums[i]]=false;
                i++;
            }
            sum+=nums[j];
            mp[nums[j]]=true;
            ans=max(ans,sum);
            j++;
        }
        return ans;
    }
};

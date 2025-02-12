class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int sum=0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            cout<<sum<<" ";
            if(mp[sum]!=0){
                int maxi=max(mp[sum],nums[i]);
                ans=max(ans,mp[sum]+nums[i]);
                mp[sum]=maxi;
            }
            else{
                mp[sum]=nums[i];
            }
        }
        return ans;
    }
};

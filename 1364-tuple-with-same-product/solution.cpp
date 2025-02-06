class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int pro=nums[i]*nums[j];
                ans+=8*mp[pro];
                mp[pro]++;
            }
        } 
        return ans;
    }
};

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int pro=1;
        for(int i=0;i<nums.size();i++){
            pro=pro*nums[i];
            maxi=max(maxi,pro);
            pro=pro==0?1:pro;
        }
        pro=1;
        for(int i=nums.size()-1;i>=0;i--){
            pro=pro*nums[i];
            maxi=max(maxi,pro);
            pro=pro==0?1:pro;
        }

        return maxi;
    }
};

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        int i=0,j=0;
        int n=nums.size();
        int pro=1;
        if(k<=1) return 0;
        while(j<n){
            pro*=nums[j];
            while(pro>=k){
                pro/=nums[i];
                i++;
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
};

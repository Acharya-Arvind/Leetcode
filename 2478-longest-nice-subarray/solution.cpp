class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans=0;
        int i=0;
        int n=nums.size();
        int cur=0;
        if(n==1) return 1;
        for(int j=0;j<n;j++){
            while((cur&nums[j])!=0){
                cur^=nums[i];
                i++;
            }
            cur |=nums[j];
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};

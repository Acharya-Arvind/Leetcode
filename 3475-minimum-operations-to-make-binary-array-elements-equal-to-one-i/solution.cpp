class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
                nums[i]=nums[i]?0:1;
                nums[i+1]=nums[i+1]?0:1;
                nums[i+2]=nums[i+2]?0:1;
                ans++;
            }
        }
        if(*min_element(nums.begin(),nums.end())==0) return -1;
        return ans;
    }
};

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int left=0;
            for(int j=i-1;j>=0;j--) left+=nums[j];
            int right=0;
            for(int j=i+1;j<nums.size();j++) right+=nums[j];
            if(left==right) return i;
        }
        return -1;
    }
};

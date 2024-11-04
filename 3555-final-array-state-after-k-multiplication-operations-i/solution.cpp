class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int min=nums[0];
            for(int j=0;j<nums.size();j++){
                if(min>nums[j]) min=nums[j];
            }
            for(int k=0;k<nums.size();k++){
                if(nums[k]==min){ nums[k]*=multiplier;
                break;
                }
            }
            
        }
        return nums;
    }
};

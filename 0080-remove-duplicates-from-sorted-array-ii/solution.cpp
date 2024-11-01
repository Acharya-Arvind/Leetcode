class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // unordered_map<int,int> a;
        int var=1;
        for(int i=1;i<nums.size();i++){ 
            // a[nums[i]]++;
            if(nums[i] == nums[i-1]){
                var++;
            }else{
                var=1;
            }
            if(var>2){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
        return nums.size();

        
    }
};

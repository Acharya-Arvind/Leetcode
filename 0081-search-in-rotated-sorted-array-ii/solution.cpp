class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_map<int,int> num;
        for(int i=0;i<nums.size();i++) num[nums[i]]++;
        if(num[target]==0) return false;
        return true;
        
    }
};

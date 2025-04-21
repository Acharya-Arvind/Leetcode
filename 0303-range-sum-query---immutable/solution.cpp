class NumArray {
public:
    vector<int> ans;
    NumArray(vector<int>& nums) {
    int n=nums.size();
    ans.resize(n);
    ans[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        ans[i]=ans[i-1]+nums[i];
    }
    }
    
    int sumRange(int i, int j) {
        if(i==0) return ans[j];
    else if(j==0) return ans[i];
    else{
        if(i<j){
           return ans[j]-ans[i-1];
        }
        else{
            return ans[i]-ans[j-1];
        }
    }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

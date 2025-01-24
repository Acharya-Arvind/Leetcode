class Solution {
    public int firstMissingPositive(int[] nums) {
        Arrays.sort(nums);
        int maxi=nums[nums.length-1];
        int i=0,j=1;
        while(j<=maxi){
            if(i>0 && nums[i-1]==nums[i]) {
                i++;
                continue;
            }
            if(nums[i]<1){
                i++;
                continue;
            }
            if(nums[i]!=j) return j;
            j++;
            i++;
        }
        return j;
    }
}

class Solution {
    public int dominantIndex(int[] nums) {
        int val=Integer.MIN_VALUE,ind=0;
        for(int i=0;i<nums.length;i++){
            if(val<nums[i]){
                val=nums[i];
                ind=i;
            }
        }
        for(int i=0;i<nums.length;i++){
            if(nums[i]==val) continue;
            if(nums[i]*2>val) return -1;
        }
        return ind;
    }
}

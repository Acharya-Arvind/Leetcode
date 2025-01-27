class Solution {
    public int minimumOperations(int[] nums) {
        int c=0;
        for(int i=0;i<nums.length;i++){
            int n=nums[i]%3;
            if(n!=0) c++;
        }
        return c;
    }
}

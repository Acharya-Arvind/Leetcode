class Solution {
    public int[] numberOfPairs(int[] nums) {
        int[] ans=new int[2];
        Arrays.sort(nums);
        for(int i=1;i<nums.length;i++){
            if(nums[i-1]==nums[i]){
                nums[i-1]=-1;
                nums[i]=-1;
            }
        }
        int left=0,right=0;
        for(int i=0;i<nums.length;i++){
           if(nums[i]==-1) left++;
           else right++;
        }
        ans[0]=left/2;
        ans[1]=right;
        return ans;
    }
}

class Solution {
    public int subarraySum(int[] nums) {
        int ans=0;
        for(int i=0;i<nums.length;i++){
            int val=Math.max(0,i-nums[i]);
            for(int j=val;j<=i;j++) ans+=nums[j];
        }
        return ans;
    }
}

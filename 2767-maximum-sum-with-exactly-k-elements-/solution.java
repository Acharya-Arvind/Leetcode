class Solution {
    public int maximizeSum(int[] nums, int k) {
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.length;i++){
            ans=Math.max(nums[i],ans);
        }
        System.out.println(ans);
        for(int i=0;i<k;i++){
            sum+=ans++;
        }
        
        return sum;
    }
}

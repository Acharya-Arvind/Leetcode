class Solution {
    public int longestOnes(int[] nums, int k) {
        int i=0,j=0;
        int zero=0;
        int ans=0;
        while(i<nums.length && j<nums.length){
            if(nums[j]==0)zero++;
            j++;
            while(zero>k){
                if(nums[i]==0) zero--;
                i++;
            }
            ans=Math.max(ans,j-i);
        }
        return ans;
    }
}

class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int[] ans=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            ans[i]=-1;
        }
        int i=0;
        while(i<nums.length){
            int j=0;
            if(i!=nums.length-1) j=i+1;
            while(i!=j){
                if(nums[i]<nums[j]){
                    ans[i]=nums[j];
                    break;
                }
                if(j==nums.length-1){
                    j=0;
                }
                else{
                    j++;
                }
            }
            i++;
        }
        return ans;
    }
}

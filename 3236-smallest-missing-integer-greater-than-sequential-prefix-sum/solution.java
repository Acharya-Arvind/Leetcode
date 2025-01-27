class Solution {
    public int missingInteger(int[] nums) {
        int sum=nums[0];
        int maxi=0;
        int flag=0;
        if(nums.length==1 || nums[0]!=nums[1]-1){
            maxi=nums[0];
        }
        else{
        for(int i=1;i<nums.length;i++){
            if(nums[i-1]==nums[i]-1){
                sum+=nums[i];
                flag=1;
            }
            else{
                maxi=Math.max(maxi,sum);
                sum=0;
            }
            
        }
        maxi=Math.max(maxi,sum);
        }
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++){
            if(maxi==nums[i]){
                maxi++;
            }
        }
        return maxi;
    }
}

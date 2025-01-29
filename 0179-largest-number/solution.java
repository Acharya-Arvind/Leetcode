class Solution {
    public String largestNumber(int[] nums) {
        for(int i=0;i<nums.length;i++){
            int flag=0;
            for(int j=0;j<nums.length-1;j++){
                String a=Integer.toString(nums[j]);
                String b=Integer.toString(nums[j+1]);
                int res=(a+b).compareTo(b+a);
                if(res<0){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    flag=1;
                }
            }
            if(flag==0) break;
        }
        String ans="";
        int c=0;
        for(int i=0;i<nums.length;i++){
             ans+=Integer.toString(nums[i]);
             if(nums[i]!=0) c++;
        }
        if(c==0) return "0";
        return ans;
    }
}

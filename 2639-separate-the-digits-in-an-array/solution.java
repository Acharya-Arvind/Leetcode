class Solution {
    public int[] separateDigits(int[] nums) {
        List<Integer> ans=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]/10==0){
                ans.add(nums[i]);
            }
            else{
                String s=Integer.toString(nums[i]);
                for(int j=0;j<s.length();j++){
                    ans.add((s.charAt(j)-'0'));

                }
                
            }
        }
        int n=ans.size(),i=0;
        int[] arr=new int[n];
        for(int x:ans) arr[i++]=x;
        return arr;
    }
}

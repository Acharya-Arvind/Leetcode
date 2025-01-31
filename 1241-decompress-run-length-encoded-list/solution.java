class Solution {
    public int[] decompressRLElist(int[] nums) {
        ArrayList<Integer> ans=new ArrayList<>();
        for(int i=0;i<nums.length;i+=2){
            for(int j=0;j<nums[i];j++){
                ans.add(nums[i+1]);
            }
        }
        int[] arr=new int[ans.size()];
        int i=0;
        for(int x:ans) arr[i++]=x;
        return arr;
    }
}

class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        ArrayList<Integer> ans=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            ans.add(index[i],nums[i]);
        }
        return convertToIntArray(ans);
    }
    private int[] convertToIntArray(ArrayList<Integer> ans){
        int[] arr=new int[ans.size()];
        int i=0;
        for(int x:ans) arr[i++]=x;
        return arr;
    }
}

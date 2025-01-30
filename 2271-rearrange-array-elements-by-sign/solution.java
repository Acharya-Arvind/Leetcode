class Solution {
    public int[] rearrangeArray(int[] nums) {
        ArrayList<Integer> arr1=new ArrayList<>();
        ArrayList<Integer> arr2=new  ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]<0) arr1.add(nums[i]);
            else arr2.add(nums[i]);
        }
        int[] ans=new int[arr1.size()+arr2.size()];
        int i=0,j=0;
        while(i<ans.length && j<arr1.size() && j<arr2.size()){
            ans[i++]=arr2.get(j);
            ans[i++]=arr1.get(j);
            j++;
        }
        return ans;
    }
}

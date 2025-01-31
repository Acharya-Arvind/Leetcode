class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        ArrayList<Integer> arr1=new ArrayList<>();
        int c=0;
        ArrayList<Integer> arr2=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]==pivot) c++;
            else if(nums[i]<pivot) arr1.add(nums[i]);
            else arr2.add(nums[i]);
        }
        for(int i=0;i<arr1.size();i++) nums[i]=arr1.get(i);
        for(int i=0;i<c;i++) nums[i+arr1.size()]=pivot;
        for(int i=0;i<arr2.size();i++) nums[i+arr1.size()+c]=arr2.get(i);
        return nums;
    }
}

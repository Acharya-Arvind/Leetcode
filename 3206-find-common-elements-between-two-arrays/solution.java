class Solution {
    public int[] findIntersectionValues(int[] nums1, int[] nums2) {
        ArrayList<Integer> arr1=new ArrayList<>();
        ArrayList<Integer> arr2=new ArrayList<>();
        for(int i=0;i<nums1.length;i++){
            arr1.add(nums1[i]);
        }
        for(int i=0;i<nums2.length;i++){
            arr2.add(nums2[i]);
        }
        int lc=0,rc=0;
        for(int i=0;i<arr1.size();i++){
            if(arr2.contains(arr1.get(i))) lc++;
        }
        for(int i=0;i<arr2.size();i++){
            if(arr1.contains(arr2.get(i))) rc++;
        }
        int[] ans={lc,rc};
        return ans;
    }
}

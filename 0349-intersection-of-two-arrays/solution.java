class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int n=0;
        int[] ans=new int[nums1.length<nums2.length?nums1.length:nums2.length];
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int ind=0;
        for(int i=0;i<nums1.length;i++){
            for(int j=0;j<nums2.length;j++){
                if(nums1[i]==nums2[j]){
                    if(ind==0) ans[ind++]=nums1[i];
                    else if(ans[ind-1]!=nums2[j])
                        ans[ind++]=nums1[i];
                }
            }
        }
        int[] res=new int[ind];
        for(int i=0;i<ind;i++){
            res[i]=ans[i];
        }
        return res;
    }
}

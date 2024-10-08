class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
       int n=nums1.length+nums2.length;
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            if(i<nums1.length){
                arr[i]=nums1[i];
                continue;
            }
            arr[i]=nums2[i-nums1.length];
            
        }
        
        Arrays.sort(arr);
        for(int i=0;i<n;i++)
        System.out.println(arr[i]);
        if(n%2!=0){
            // System.out.println(arr[n/2]);
            return (float)arr[n/2];
        }
        float ans=(arr[n/2]+arr[(n/2)-1]);

        return ans/2;

    }
}

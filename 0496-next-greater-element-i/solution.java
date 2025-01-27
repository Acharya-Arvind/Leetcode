class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int i=0;
        int[] ans=new int[nums1.length];
        while(i<nums1.length){
            int val=nums1[i];
            int j=0;
            while(j<nums2.length){
                if(nums2[j]==val){
                    int k=j+1;
                    while(k<nums2.length){
                        if(nums2[k]>val){
                            ans[i]=nums2[k];
                            break;
                        }
                        k++;
                    }
                    if(k==nums2.length){
                        ans[i]=-1;
                        break;
                    }
                }
                
                j++;
            }
            i++;
        }
        return ans;
    }
}

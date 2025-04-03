class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        int[][] ans=new int[nums1.length+nums2.length][2];
        int ind=0;
        for(int i=0;i<nums1.length;i++){
            int j=0;
            for(j=0;j<ans.length;j++){
                if(ans[j][0]==nums1[i][0]){
                    ans[j][1]+=nums1[i][1];
                    break;
                }
            }
            if(j==ans.length){
                ans[ind][0]=nums1[i][0];
                ans[ind++][1]=nums1[i][1];
            }
        }
        for(int i=0;i<nums2.length;i++){
            int j=0;
            for(j=0;j<ans.length;j++){
                if(ans[j][0]==nums2[i][0]){
                    ans[j][1]+=nums2[i][1];
                    break;
                }
            }
            if(j==ans.length){
                ans[ind][0]=nums2[i][0];
                ans[ind++][1]=nums2[i][1];
            }
        }
        int[][] res=new int[ind][2];
        for(int i=0;i<ind;i++){
            res[i][0]=ans[i][0];
            res[i][1]=ans[i][1];
        }
        Arrays.sort(res, (a, b) -> a[0] - b[0]);
        return res;
    }
}

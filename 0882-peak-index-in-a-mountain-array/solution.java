class Solution {
    public int peakIndexInMountainArray(int[] m) {
        int peak=m[0];
        int ind=0;
        for(int i=1;i<m.length;i++){
            if(peak<m[i]){
                peak=m[i];
                ind=i;            }
        }
        return ind;
    }
}

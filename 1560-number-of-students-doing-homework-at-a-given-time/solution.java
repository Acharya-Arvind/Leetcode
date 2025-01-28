class Solution {
    public int busyStudent(int[] startTime, int[] endTime, int q) {
        int c=0;
        for(int i=0;i<startTime.length;i++){
            if(endTime[i]==q || startTime[i]==q) c++;
            else if(startTime[i]<q && endTime[i]>q) c++;
        }
        return c;
    }
}

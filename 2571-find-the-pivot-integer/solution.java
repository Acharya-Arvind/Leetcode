class Solution {
    public int pivotInteger(int n) {
        if(n==1 || n==0) return n;
        int ls=1,rs=n;
        int i=2,j=n-1;
        while(i<j && i<n && j>0){
            if(ls<rs){
                ls+=i;
                i++;
            }
            else{
                rs+=j;
                j--;
            }
            if(i==j && ls==rs) return i;
            

        }
        System.out.println(i+" "+j);
        return -1;
    }
}

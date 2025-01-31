class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int sum =0;
        int n=arr.length%2==0?arr.length/2:arr.length/2+1;
        int len=arr.length;
        for(int i=0;i<n;i++){
            for(int j=0;j<len;j++){
                 int sub=0;
                for(int k=j;k<((2*i+1)+j) && k<arr.length;k++){
                    sub+=arr[k];
     
                }
                
                sum+=sub;
               
            }
            len-=2;
            
        }
        return sum;
    }
}

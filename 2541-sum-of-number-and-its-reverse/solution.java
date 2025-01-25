class Solution {
    public boolean sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        for(int i=num/2;i<num;i++){
            int n=i;
            int rev=0;
            while(n>0){
                rev=(rev*10)+n%10;
                n/=10;
            }
            if(rev+i==num) return true;
        }
        return false;
    }
}

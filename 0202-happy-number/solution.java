class Solution {
    public boolean isHappy(int n) {
        while(n>=7){
            int num=n;
            int sum=0;
            while(num>0){
                sum+=Math.pow(num%10,2);
                num/=10;
            }
            n=sum;
        }
        return n==1;
    }
}

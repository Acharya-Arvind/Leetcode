class Solution {
    public int alternateDigitSum(int n) {
        int p=1;
        int ans=0;
        int num=n;
        n=0;
        while(num>0){
            n=(n*10)+num%10;
            num/=10;
        }
        while(n>0){
            if(p==1){
                ans+=n%10;
                n/=10;
                p=0;
            }
            else{
                ans-=n%10;
                n/=10;
                p=1;
            }
        }
        return ans;
    }
}

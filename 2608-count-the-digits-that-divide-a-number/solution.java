class Solution {
    public int countDigits(int num) {
        int ans=0;
        int n=num;
        while(num>0){
            if(n%(num%10)==0) ans++;
            num/=10;
        }
        return ans;
    }
}

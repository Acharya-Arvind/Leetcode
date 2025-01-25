class Solution {
    public int countEven(int num) {
        int c=0;
        for(int  i=num;i>0;i--){
            if(i<10){
                if(i%2==0){
                c++;
                }
            }
            else{
                int n=i;
                int sum=0;
                while(n>0){
                    sum+=n%10;
                    n/=10;
                }
                if(sum%2==0) c++;

            }
        }
        return c;
    }
}

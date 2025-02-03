class Solution {
    public int generateKey(int num1, int num2, int num3) {
        String ans="";
        int i=0;
        while(i<4){
            if(num1>0 && num2>0 && num3>0){
                int temp=Math.min(num1%10,num2%10);
                ans=Integer.toString(Math.min(temp,num3%10))+ans;
                num1/=10;
                num2/=10;
                num3/=10;
            }
            i++;
        }
        return Integer.parseInt(ans);
    }
}

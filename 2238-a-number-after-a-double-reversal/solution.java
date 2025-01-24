class Solution {
    public boolean isSameAfterReversals(int num) {
        int n1=num;
        int n2=0;
        while(num>0){
            n2=(n2*10)+num%10;
            num/=10;
        }
        while(n2>0){
            num=(num*10)+n2%10;
            n2/=10;
        }
        System.out.println(n1+" "+n2);
        return n1==num;
    }
}

class Solution {
    public boolean lemonadeChange(int[] b) {
        int five=0,ten=0,twenty=0;
        int balance=0;
        for(int i=0;i<b.length;i++){
            if(b[i]==5){
                five++;
            }
            else if(b[i]==10){
                ten++;
                five--;
            }
            else {
                twenty++;
                if(ten==0){
                    five-=3;
                }
                else{
                five--;
                ten--;
                }
            }
            if(five<0 || ten<0 || twenty<0){
                return false;
            }
        }
        return true;
    }
}

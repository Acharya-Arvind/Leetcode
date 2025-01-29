class Solution {
    public String getHint(String secret, String guess) {
        int bulls=0;
        int cow=0;
        int[] a=new int[10];
        int[] b=new int[10];
        for(int i=0;i<secret.length();i++){
            if(secret.charAt(i)==guess.charAt(i)){
                bulls++;
            }
            else{
                a[secret.charAt(i)-'0']++;
                b[guess.charAt(i)-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            cow+=Math.min(a[i],b[i]);
        }
        return bulls+"A"+cow+"B";
    }
}

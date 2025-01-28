class Solution {
    public boolean isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            String s="";
            int j=i;
            int num=n;
            while(num>0){
                s+=Integer.toString(num%i);
                num/=i;
            }
            System.out.println(s);
            if(!palin(s)) return false;
        }
        return true;
    }
    private boolean palin(String s){
        int n=s.length();
        for(int i=0,j=n-1;i<n/2;i++,j--){
            if(s.charAt(i)!=s.charAt(j)) return false;
        }
        return true;
    }
}

class Solution {
    public int hammingDistance(int x, int y) {
        String s1=Integer.toBinaryString(x);
        String s2=Integer.toBinaryString(y);
        int n=s1.length()>s2.length()?s2.length():s1.length();
        int check=0;
        System.out.println(s1+" "+s2);
       if(n==s1.length()) check=1;
        else check=2; 
        
        if(check==1){
            String temp="";
            for(int i=n;i<s2.length();i++){
                temp+='0';
            }
            s1=temp+s1;
        }
        else{
            String temp="";
            for(int i=n;i<s1.length();i++){
                temp+='0';
            }
            s2=temp+s2;
        }
        int c=0;
        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i)!=s2.charAt(i)) c++;
        }
        return c;
    }
}

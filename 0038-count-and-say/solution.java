class Solution {

    String countAndSay(int n) {
        if(n==1) return "1";
        String s=countAndSay(n-1);
        int c=1;
        String ans="";
        for(int i=1;i<s.length();i++){
            if(s.charAt(i-1)==s.charAt(i)) c++;
            else{
                ans+=Integer.toString(c)+s.charAt(i-1);
                c=1;
            }
        }
    ans+=Integer.toString(c)+s.charAt(s.length()-1);
    return ans;
    }
}

class Solution {
    public String replaceDigits(String s) {
        String ans="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)<='9' && s.charAt(i)>='0'){
                ans+=(char)(s.charAt(i-1)+s.charAt(i)-'0');
            }
            else{
                ans+=s.charAt(i);
            }
        }
        return ans;
    }
}

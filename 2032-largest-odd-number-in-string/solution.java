class Solution {
    public String largestOddNumber(String s) {
        if((s.charAt(s.length()-1)-'0')%2!=0) return s;
        for(int i=s.length()-1;i>0;i--){
            String str=s.substring(0,i);
            if((str.charAt(str.length()-1)-'0')%2!=0) return str;
        }
        return "";
    }
}

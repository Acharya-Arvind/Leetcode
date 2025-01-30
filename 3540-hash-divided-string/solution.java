class Solution {
    public String stringHash(String s, int k) {
        String ans="";
        for(int i=0;i<s.length();i+=k){
            int sum=0;
            for(int j=i;j<i+k;j++){
                sum+=s.charAt(j)-'a';
            }
            ans+=(char)(97+sum%26);
        }
        return ans;
    }
}

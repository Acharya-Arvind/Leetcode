class Solution {
    public String firstPalindrome(String[] words) {
        for(int i=0;i<words.length;i++){
            String s=words[i];
            int j,k;
            for(j=0,k=s.length()-1;j<s.length()/2;j++,k--){
                if(s.charAt(j)!=s.charAt(k)) break;
            }
            if(j==s.length()/2)
            return s;
        }
        return "";
    }
}

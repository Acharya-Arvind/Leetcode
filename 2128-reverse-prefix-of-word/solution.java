class Solution {
    public String reversePrefix(String word, char ch) {
        for(int i=0;i<word.length();i++){
            if(word.charAt(i)==ch){
                char[] c=word.substring(0,i+1).toCharArray();
                String s1="";
                String s2=word.substring(i+1);
                for(int j=c.length-1;j>=0;j--){
                    s1+=c[j];
                }
                return s1+s2;
            }
        }
        return word;
    }
}

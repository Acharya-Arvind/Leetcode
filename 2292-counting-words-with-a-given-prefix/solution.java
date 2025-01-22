class Solution {
    public int prefixCount(String[] words, String pref) {
        int c=0;
        int n=pref.length();
        for(int i=0;i<words.length;i++){
            if(words[i].length()>=n){

                if(words[i].substring(0,n).equals(pref)) c++;
            }
        }
        
        return c;
    }
}

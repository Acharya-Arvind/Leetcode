class Solution {
    public boolean isAcronym(List<String> words, String s) {
        String ans="";
        for(int i=0;i<words.size();i++){
            ans+=words.get(i).charAt(0);
        }
        return ans.equals(s);
    }
}

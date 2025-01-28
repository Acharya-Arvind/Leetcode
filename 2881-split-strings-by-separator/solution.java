class Solution {
    public List<String> splitWordsBySeparator(List<String> words, char separator) {
        List<String>ans=new ArrayList<>();
        for(int i=0;i<words.size();i++){
            String s="";
            for(int j=0;j<words.get(i).length();j++){
                if(words.get(i).charAt(j)==separator && !s.equals("")){
                    ans.add(s);
                    s="";
                }
                else if(words.get(i).charAt(j)!=separator){
                    s+=words.get(i).charAt(j);
                }
            }
            if(!s.equals("")) ans.add(s);
        }
        return ans;
    }
}

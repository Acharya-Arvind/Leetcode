class Solution {
    public String sortVowels(String s) {
        String v="AEIOUaeiou";
        String vo="";
        for(int i=0;i<s.length();i++){
            if(v.indexOf(s.charAt(i))!=-1) vo+=s.charAt(i);
        }
        char[] ch=vo.toCharArray();
        Arrays.sort(ch);
        vo="";
        int ind=0;
        for(int i=0;i<s.length();i++){
            if(v.indexOf(s.charAt(i))!=-1) vo+=ch[ind++];
            else vo+=s.charAt(i);
        }
        return vo;
    }
}

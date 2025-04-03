class Solution {
    public String reverseVowels(String s) {
        int i=0,j=s.length()-1;
        StringBuilder str=new StringBuilder(s);
        String v="AEIOUaeiou";
        while(i<j){
            char val1=s.charAt(i);
            if(v.indexOf(val1)==-1){
                i++;
                continue;
            }
            char val2=s.charAt(j);
            if(v.indexOf(val2)==-1){
                j--;
                continue;
            }
            str.setCharAt(i,val2);
            str.setCharAt(j,val1);
            i++;
            j--;
        }
        return str.toString();
    }
}

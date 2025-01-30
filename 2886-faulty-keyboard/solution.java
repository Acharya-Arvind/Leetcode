class Solution {
    public String finalString(String s) {
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='i'){
                String sub=s.substring(0,i);
                String rem1="";
                for(int j=sub.length()-1;j>=0;j--){
                    rem1+=sub.charAt(j);
                }
                s=rem1+s.substring(i+1);
                i--;
            }
        }
        return s;
    }
}

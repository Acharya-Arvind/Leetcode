class Solution {
    public String maximumOddBinaryNumber(String s) {
        char[] rv=s.toCharArray();
        char[] c=new char[s.length()];
        Arrays.sort(rv);
        int j=0;
        for(int i=s.length()-1;i>=0;i--){
            c[j++]=rv[i];
        }
        for(int i=c.length-1;i>=0;i--){
            if(c[i]=='1'){
                char temp=c[i];
                c[i]=c[c.length-1];
                c[c.length-1]=temp;
                break;
            }
        }
        return new String(c);
    }
}

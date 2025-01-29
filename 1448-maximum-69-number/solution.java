class Solution {
    public int maximum69Number (int num) {
        int maxi=0;
        StringBuilder s=new StringBuilder(Integer.toString(num));
        int flag=1;
        for(int i=0;i<s.length();i++){
            char a=s.charAt(i);
            if(a=='6'){
                s.setCharAt(i,'9');
                maxi=Math.max(maxi,Integer.parseInt(s.toString()));
                s.setCharAt(i,'6');
                flag=0;
            }
        }
        if(flag==1) return num;
        return maxi;
    }
}

class Solution {
    public boolean isFascinating(int n) {
        String s=Integer.toString(n);
        s+=Integer.toString(n*2);
        s+=Integer.toString(n*3);
        char[] c=s.toCharArray();
        Arrays.sort(c);
        if(c.length!=9) return false;
        for(int i=1;i<10;i++){
            if(c[i-1]-'0'!=i) return false;
        }
        return true;
    }
}

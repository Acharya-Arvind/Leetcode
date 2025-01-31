class Solution {
    public int areaOfMaxDiagonal(int[][] d) {
        double dia=0;
        int l=0,b=0;
        for(int i=0;i<d.length;i++){
            double diam=Math.sqrt(d[i][0]*d[i][0]+d[i][1]*d[i][1]);
            if(dia<diam){
                dia=diam;
                l=d[i][0];
                b=d[i][1];
            }else if(dia==diam){
                if(Math.abs(l-b)>Math.abs(d[i][0]-d[i][1])){
                    l=d[i][0];
                    b=d[i][1];
                }
            }
        }
        return l*b;
    }
}

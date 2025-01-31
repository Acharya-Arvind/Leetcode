class Solution {
    public int diagonalSum(int[][] mat) {
        int suml=0,sumr=0;
        int n=mat.length-1,j=0;
        for(int i=0;i<mat.length;i++){
            suml+=mat[i][i];
            sumr+=mat[j++][n--];
        }
        if(mat.length%2==0){
            return suml+sumr;
        }
        return suml+sumr-mat[mat.length/2][mat.length/2];
    }
}

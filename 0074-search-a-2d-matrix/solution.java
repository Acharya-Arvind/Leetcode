class Solution {
     static boolean solve(int[][] mat,int i,int j,int key,int m,int n){
        if(i==m || j<0) return false;
        if(mat[i][j]==key) return true;
        return mat[i][j]<key?solve(mat,i+1,j,key,m,n):solve(mat,i,j-1,key,m,n);
        
    }
    public boolean searchMatrix(int[][] matrix, int target) {
        return solve(matrix,0,matrix[0].length-1,target,matrix.length,matrix[0].length);
    }
}

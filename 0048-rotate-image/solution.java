class Solution {
    public void rotate(int[][] matrix) {
    int n=matrix.length;
int[][] m=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                m[i][j]=matrix[j][i];

            }
        }
        for(int i=0,k=0;i<n;i++,k++){
            for(int j=n-1,l=0;j>=0;j--,l++){
                
                matrix[k][l]=m[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

            System.out.println(matrix[i][j]);

            }
             System.out.println(" ");
        }
        
    }
}

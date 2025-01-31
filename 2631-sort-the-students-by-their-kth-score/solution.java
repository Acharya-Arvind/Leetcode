class Solution {
    public int[][] sortTheStudents(int[][] score, int k) {
        
        for(int i=0;i<score.length;i++){
            for(int j=0;j<score.length-1;j++){
                if(score[j][k]<score[j+1][k]){
                    int[] ind=new int[score[0].length];
                    ind=score[j];
                    score[j]=score[j+1];
                    score[j+1]=ind;
                }
            }
        }
            return score;
        }
        
    
}

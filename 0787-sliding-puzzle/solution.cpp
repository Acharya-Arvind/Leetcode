class Solution {
public:
    bool check(vector<vector<int>>& b){
        int num=1;
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                if(i==1 && j==2) break;
                if(b[i][j]!=num++) return false;
            }
        }
        return true;
    }
    int ans=INT_MAX;
    void backtrack(int i,int j,vector<vector<int>>& b,int count,int pari,int parj){
        if(count>20)return;
        if(check(b)){
            ans=min(ans,count);
            return;
        }
        if(i!=1 && pari!=i+1){
            swap(b[i][j],b[i+1][j]);
            backtrack(1,j,b,count+1,i,j);
            swap(b[i][j],b[i+1][j]);
        }
        if(i!=0 && pari!=i-1){
            swap(b[i][j],b[i-1][j]);
            backtrack(0,j,b,count+1,i,j);
            swap(b[i][j],b[i-1][j]);
        }
        if(j!=0 && parj!=j-1){
            swap(b[i][j],b[i][j-1]);
            backtrack(i,j-1,b,count+1,i,j);
            swap(b[i][j],b[i][j-1]);
        }
        if(j!=2 && parj!=j+1){
            swap(b[i][j],b[i][j+1]);
            backtrack(i,j+1,b,count+1,i,j);
            swap(b[i][j],b[i][j+1]);
        }
    }
    int slidingPuzzle(vector<vector<int>>& board) {
         for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]==0){
                    backtrack(i,j,board,0,-1,-1);
                    break;
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> ans(m);
        for(int i=0;i<m;i++){
            ans[i]=board[i];
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int l=0,r=0,t=0,b=0,tl=0,tr=0,bl=0,br=0;
                int sum=0;
                int val=ans[i][j];
                if(i>0 && j>0) tl=ans[i-1][j-1];
                if(i<m-1 && j<n-1) br=ans[i+1][j+1];
                if(i<m-1 && j>0) bl=ans[i+1][j-1];
                if(j<n-1 && i>0) tr=ans[i-1][j+1];
                if(i>0) t=ans[i-1][j];
                if(j>0) l=ans[i][j-1];
                if(i<m-1) b=ans[i+1][j];
                if(j<n-1) r=ans[i][j+1];
                sum=l+r+t+b+tl+tr+bl+br;
                if(val==0){
                    if(sum==3) board[i][j]=1;
                }
                else{
                    if(sum>3) board[i][j]=0;
                    else if(sum<2) board[i][j]=0;
                    else board[i][j]=1;
                }

            }
        }
    }
};

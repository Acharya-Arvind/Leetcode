class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& b){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]=='.'){
                    for(char x='1';x<='9';x++){
                        if(check(i,j,b,x)){
                            b[i][j]=x;
                            if(solve(b)) return true;
                            b[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool check(int i,int j,vector<vector<char>>& b,char k){
        for(int x=0;x<9;x++){
            if(b[x][j]==k || b[i][x]==k) return false;
        }
        int row=(i/3)*3;
        int col=(j/3)*3;
        for(int x=row;x<row+3;x++){
            for(int y=col;y<col+3;y++){
                if(b[x][y]==k) return false;
            }
        }
        return true;
    }
};

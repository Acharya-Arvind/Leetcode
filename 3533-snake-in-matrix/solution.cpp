class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int r=0,c=0,pos=0;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=pos++;

            }
        }
        for(int i=0;i<commands.size();i++){
            
                if(commands[i]=="RIGHT"){
                    c++;
                }
                else if(commands[i]=="LEFT"){
                    c--;
                }
                else if(commands[i]=="UP"){
                    r--;
                }
                else{
                    r++;
                }

            }
        
        return a[r][c];
        
    }
};

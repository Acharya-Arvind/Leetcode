class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {

        int i1=coordinate1[1]-'0';
        int i2=coordinate2[1]-'0';
        int j1=coordinate1[0]-'b'+2;
        int j2=coordinate2[0]-'b'+2;
        int c1;
        int c2;
        if(i1%2!=0 && j1%2!=0){
            c1=1;
        }
        if(i1%2!=0 && j1%2==0){
            c1=0;
        }
        if(i1%2==0 && j1%2!=0){
            c1=0;
        }
        if(i1%2==0 && j1%2==0){
            c1=1;
        }

        if(i2%2!=0 && j2%2!=0){
            c2=1;
        }
        if(i2%2!=0 && j2%2==0){
            c2=0;
        }
        if(i2%2==0 && j2%2!=0){
            c2=0;
        }
        if(i2%2==0 && j2%2==0){
            c2=1;
        }
        
        return c1==c2;
        
    }
};

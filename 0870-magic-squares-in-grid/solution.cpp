class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int m=grid.size();
        
        int ans=0;
        bool flag;
        int n=grid[0].size();
        for(int i=0;i<m-2;i++){
            for(int j=0;j<n-2;j++){
                int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0;
                flag=true;
                unordered_map<int,int> mp;
                for(int x=j;x<3+j;x++){
                    s1+=grid[i][x];
                    mp[grid[i][x]]++;
                }
                for(int x=j;x<3+j;x++){
                    s2+=grid[i+1][x];
                    mp[grid[i+1][x]]++;
                }
                for(int x=j;x<3+j;x++){
                    s3+=grid[i+2][x];
                    mp[grid[i+2][x]]++;
                }
                for(auto x:mp){
                    if(x.second>1 || x.first>9) flag=false;
                }
                for(int x=i;x<3+i;x++){
                    s4+=grid[x][j];
                }
                for(int x=i;x<3+i;x++){
                    s5+=grid[x][j+1];
                }
                for(int x=i;x<3+i;x++){
                    s6+=grid[x][j+2];
                }
                for(int x=i,y=j;x<3+i;x++,y++){
                    s7+=grid[x][y];
                }
                for(int x=i,y=j+2;x<3+i && y>=j;x++,y--){
                    s8+=grid[x][y];
                }
                // cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<endl;
                if(s1==15 && s2==15 && s3==15 && s4==15 && s5==15 && s6==15 && s7==15 && s8==15 && flag) ans++;
            }
        }
        return ans;
    }
};

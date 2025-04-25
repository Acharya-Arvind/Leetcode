class Solution {
public:
    int ans=0;
    bool search(int i,int j,vector<string>& v,int n){
        for(int x=i-1;x>=0;x--){
            if(v[x][j]=='Q') return false;
        }
        for(int x=i-1,y=j-1;x>=0&& y>=0;x--,y--){
            if(v[x][y]=='Q') return false;
        }
        for(int x=i-1,y=j+1;x>=0 && y<n;x--,y++){
            if(v[x][y]=='Q') return false;
        }
        return true;
    }
    void backtrack(int ind,vector<string>&v,int n){
        if(ind==n){
            ans++;
            return;
        }
        for(int i=0;i<n;i++){
            v[ind][i]='Q';
            if(search(ind,i,v,n)){
                backtrack(ind+1,v,n);
            }
            v[ind][i]='.';
        }
    }
    int totalNQueens(int n) {
        vector<string> v(n,string(n,'.'));
        backtrack(0,v,n);
        return ans;
    }
};

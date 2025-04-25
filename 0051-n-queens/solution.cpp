class Solution {
public:
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
    void backtrack(int ind,vector<vector<string>>& ans,vector<string>& v,int n){
        if(ind==n){
            ans.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            v[ind][i]='Q';
            if(search(ind,i,v,n)){
                backtrack(ind+1,ans,v,n);
            }
            v[ind][i]='.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> v(n,string(n,'.'));
            backtrack(0,ans,v,n);
        return ans;
    }
};

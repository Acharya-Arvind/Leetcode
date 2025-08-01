class Tries{
public:
    Tries* arr[26];
    bool flag;
    string s;
    Tries(){
        for(int i=0;i<26;i++) arr[i]=NULL;
        flag=false;
        s="";
    }
};
class Solution {
public:
    void add(Tries* root,string word){
        Tries* cur=root;
        for(char x:word){
            int ind=x-'a';
            if(!cur->arr[ind]) cur->arr[ind]=new Tries();
            cur=cur->arr[ind];
        }
        cur->flag=true;
        cur->s=word;
    }
    void dfs(int i,int j,int m,int n,Tries* root,vector<string>& ans,vector<vector<int>>& vis,vector<vector<char>>& board){
        if(!root || vis[i][j]) return;
        if(root->flag){
            ans.push_back(root->s);
            root->flag=false;
        }
        vis[i][j]=1;
        if(i>0 && root->arr[board[i-1][j]-'a'])dfs(i-1,j,m,n,root->arr[board[i-1][j]-'a'],ans,vis,board);
        if(j>0 && root->arr[board[i][j-1]-'a'])dfs(i,j-1,m,n,root->arr[board[i][j-1]-'a'],ans,vis,board);
        if(i<m-1 && root->arr[board[i+1][j]-'a'])dfs(i+1,j,m,n,root->arr[board[i+1][j]-'a'],ans,vis,board);
        if(j<n-1 && root->arr[board[i][j+1]-'a'])dfs(i,j+1,m,n,root->arr[board[i][j+1]-'a'],ans,vis,board);
        vis[i][j]=0;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Tries* root=new Tries();
        for(string x:words) add(root,x);
        int m=board.size();
        int n=board[0].size();
        vector<string> ans;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(root->arr[board[i][j]-'a']){
                    dfs(i,j,m,n,root->arr[board[i][j]-'a'],ans,vis,board);
                }
            }
        }
        return ans;
    }
};

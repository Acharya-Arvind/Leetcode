class Solution {
public:
vector<int> ans;
    void backtrack(string s,int n,vector<bool>& vis,int len){
        if(ans.size()==len) return;
        for(int i=n-1;i>=0;i--){
            s[i]=(s[i]=='0')?'1':'0';
            long long num=stoi(s,0,2);
            cout<<num;
            if(num<len && !vis[num]){
                vis[num]=true;
                ans.push_back(num);
                backtrack(s,n,vis,len);
            }
            s[i]=(s[i]=='0')?'1':'0';
        }
    }
    vector<int> grayCode(int n) {
        
        int len=(int)pow(2,n);
        vector<bool> vis(len,false);
        ans.push_back(0);
        vis[0]=true;
        backtrack(string(n,'0'),n,vis,len);
        return ans;
    }
};

class Solution {
public:
    void solve(map<string,int>& mp,string s,vector<string>& ans,vector<string>& temp){
        if(s.length()==0){
            string res=temp[0];
            for(int i=1;i<temp.size();i++) res+=(" "+temp[i]);
            ans.push_back(res);
            return;
        }
        for(int i=0;i<s.length();i++){
            string t=s.substr(0,i+1);
            if(mp.find(t)!=mp.end()){
                temp.push_back(t);
                solve(mp,s.substr(i+1),ans,temp);
                temp.pop_back();
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        map<string,int> mp;
        for(string x:wordDict){
            mp[x]++;
        }
        vector<string> ans,temp;
        solve(mp,s,ans,temp);
        return ans;
    }
};

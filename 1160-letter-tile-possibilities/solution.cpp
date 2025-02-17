class Solution {
public:
    void backtrack(string& tiles,set<string>& ans,vector<bool>& used,string& s){
        if(s.length()!=0){
            ans.insert(s);
        }
        for(int i=0;i<tiles.length();i++){
            if(used[i]) continue;
            used[i]=true;
            s+=tiles[i];
            backtrack(tiles,ans,used,s);
            s.pop_back();
            used[i]=false;
        }
    }
    int numTilePossibilities(string tiles) {
        set<string> ans;
        string s="";
        vector<bool> used(tiles.length(),false);
        backtrack(tiles,ans,used,s);
        return ans.size();
    }
};


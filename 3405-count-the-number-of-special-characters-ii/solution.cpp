class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> up(26,false),low(26,false);
        for(int i=0;i<word.size();i++){
            if(word[i]<='z' && word[i]>='a'){
                if(!up[word[i]-'a']) low[word[i]-'a']=true; 
                else low[word[i]-'a']=false;
            }
            else{
                up[word[i]-'A']=1;
            }
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(low[i] && up[i]) ans++;
        }
        return ans;
    }
};

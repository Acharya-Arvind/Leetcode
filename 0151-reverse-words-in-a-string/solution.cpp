class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string word="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                ans.push_back(word);
                word="";
            }
            else{
                word+=s[i];
            }
            
        }
        ans.push_back(word);
        for(int i=0;i<ans.size();i++){
            if(ans[i]==""){
                ans.erase(ans.begin()+i);
                i--;
            }
        }
        word="";
        for(int i=ans.size()-1;i>=0;i--){
            word+=ans[i];
            if(i!=0){
                word+=" ";
            }
        }
        return word;
    }
};

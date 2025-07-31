class tries{
public:
        tries* arr[26];
        bool flag;
        tries(){
            for(int i=0;i<26;i++) arr[i]=NULL;
            flag=false;
        }
    };
class Solution {
public:
    void add(tries* root,string word){
        tries* cur=root;
        for(char x:word){
            int ind=x-'a';
            if(!cur->arr[ind]) cur->arr[ind]=new tries();
            cur=cur->arr[ind];
        }
        cur->flag=true;
    }
    string find(string s,tries* root){
        tries* cur = root;
        std::string current_prefix = "";
        for (char x : s) {
            int ind = x - 'a';
            if (!cur->arr[ind]) {
                break;
            }
            cur = cur->arr[ind];
            current_prefix += x;
            if (cur->flag) {
                return current_prefix;
            }
        }
        return "";
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        tries* root=new tries();
        for(int i=0;i<dictionary.size();i++){
            add(root,dictionary[i]);
        }
        string ans,str;
        for(int i=0;i<sentence.length();i++){
            if(sentence[i]==' '){
                string temp=find(str,root);
                if(temp!=""){
                    ans+=(temp+" ");
                }
                else{
                    ans+=(str+" ");
                }
                str="";
            }
            else str+=sentence[i];
        }
        string temp=find(str,root);
        if(temp!=""){
            ans+=(temp);
        }
        else{
            ans+=(str);
        }
        return ans;
    }
};

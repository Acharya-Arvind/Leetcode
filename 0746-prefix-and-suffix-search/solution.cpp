class Tries{
public:
    Tries* arr[27];
    int ind;
    Tries(){
        for(int i=0;i<27;i++) arr[i]=NULL;
        ind=-1;
    }
};
class WordFilter {
public:
Tries* root;
    void add(Tries* root,string word,int indx){
        Tries* cur=root;
        for(char x:word){
            int ind;
            if(x=='#') ind=26;
            else ind=x-'a';
            if(!cur->arr[ind]) cur->arr[ind]=new Tries();
            cur=cur->arr[ind];
            cur->ind=max(cur->ind,indx);
        }
    }
    WordFilter(vector<string>& words) {
        root=new Tries();
        for(int x=0;x<words.size();x++){
            string temp;
            for(int i=words[x].size()-1;i>=0;i--){
                temp+=words[x][i];
                add(root,temp+"#"+words[x],x);
            }
        }
    }
    int search(string s){
        Tries* cur=root;
        for(char x:s){
            int ind;
            if(x=='#') ind=26;
            else ind=x-'a';
            if(!cur->arr[ind]) return -1;
            cur=cur->arr[ind];
        }
        return cur->ind;
    }
    int f(string pref, string suff) {
        reverse(suff.begin(),suff.end());
        return search(suff+"#"+pref);
    }
};


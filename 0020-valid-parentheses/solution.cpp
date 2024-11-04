class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        char c;
        if(s.length()<2) return false;
        for(char p:s){
            if(p=='{' || p=='(' || p=='['){   
                a.push(p);
            }
            else{
                if(!a.empty()){

                c=a.top();
                if(p=='}' && c=='{' || p==')' && c=='(' || p==']' && c=='['){
                    a.pop();
                }
                else return false;

                }
                else{
                    return false;
                }
                
            }
        }
        
        return a.empty();
        
    }
};

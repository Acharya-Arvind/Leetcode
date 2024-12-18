class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        char small=a.length()<b.length()?'a':'b';
        int an=a.length();
        int bn=b.length();
        string ans="";
        if(small=='a'){
            reverse(a.begin(),a.end());
            for(int i=0;i<bn-an;i++){
                a+='0';
            }
            reverse(a.begin(),a.end());
        }
        else{
            reverse(b.begin(),b.end());
            for(int i=0;i<an-bn;i++){
                b+='0';
            }
            reverse(b.begin(),b.end());
        }
        cout<<a<<endl<<b;
        an=a.length();
        for(int i=an-1;i>=0;i--){
            int sum=0;
            sum=a[i]-'0'+b[i]-'0'+carry;
            if(sum==0){
                ans+='0';
                carry=0;
            }
            if(sum==1){
                ans+='1';
                carry=0;
            }
            if(sum==2){
                ans+='0';
                carry=1;
            }
            if(sum==3){
                ans+='1';
                carry=1;
            }
            cout<<a[i]<<'+'<<b[i];
        }
        if(carry==1){
                ans+='1';
            }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

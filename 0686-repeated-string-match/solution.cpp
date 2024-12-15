class Solution {
public:
    bool c(string a,string b){

        int m=a.length();
        int n=b.length();
        for(int i=0;i<=m-n;i++){
            int j=0;
            for(j=0;j<n;j++){
                if(a[j+i]!=b[j]) break;
            }
            if(j==n){
            return true;
            }
        }
        return false;
        

    }
    int repeatedStringMatch(string a, string b) {
        int count=1;
        string copy_a=a;
        while(a.length()<b.length()){
            a=a+copy_a;
            count++;
        }
        if(c(a,b)){
            return count;
        }
        a=a+copy_a;
        if(c(a,b)){
            return count+1;
        }
        return -1;
    }
};

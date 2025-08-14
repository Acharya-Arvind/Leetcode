class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans;
        int c1=0,c2=0,c3=0;
        int size=a+b+c;
        for(int i=0;i<size;i++){
            if((a>=b && a>=c && c1!=2) || (c2==2 && a>0) || (c3==2 && a>0)){
                ans+='a';
                a--;
                c1++;
                c2=0;
                c3=0;
            }
            else if((b>=a && b>=c && c2!=2) || (c1==2 && b>0) || (c3==2 && b>0)){
                ans+='b';
                b--;
                c2++;
                c1=0;
                c3=0;
            }
            else if((c>=a && b<=c && c3!=2) || (c1==2 && c>0) || (c2==2 && c>0)){
                ans+='c';
                c--;
                c3++;
                c1=0;
                c2=0;
            }
        }
        return ans;
    }
};

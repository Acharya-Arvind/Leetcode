class Solution {
public:

    int check(string s,int left,int right,int& start,int& end){
        int count=0;
        if(left==right){
            count++;
            left--;
            right++;
        }

        while(left>=0 && right<s.length()){
            if(s[left]!=s[right]){
                start=left++;
                end=right--;
                return count;
            }
            else{
                left--;
                right++;
                count+=2;
            }
        }
        start=left++;
        end=right--;
        return count;

    }
    string longestPalindrome(string s) {
        int start=0;
        int end=0;
        int len=0;
        int s_start=0;
        int s_end=0;
        
        for(int i=0;i<s.length();i++){
            int x=check(s,i,i,start,end);
            if(x>len){
                len=x;
                s_start=start;
                s_end=end;
            }
            int y=check(s,i,i+1,start,end);
            if(y>len){
                len=y;
                s_start=start;
                s_end=end;
            }
        }
        string ans="";
        
        for(int i=s_start+1;i<s_end;i++){
            ans+=s[i];
        }
        return ans;
    }
};

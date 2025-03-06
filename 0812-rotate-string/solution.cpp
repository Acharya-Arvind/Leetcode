class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int n=s.size();
        for(int i=0;i<n;i++){
            int j=i;
            vector<int> ans;
            for(int j=i,k=0;j<n+i && k<n;j++,k++){
                if(s[j%n]!=goal[k]) break;
                ans.push_back(1);
            }
            if(ans.size()==n) return true;
        }
        return false;
    }
};

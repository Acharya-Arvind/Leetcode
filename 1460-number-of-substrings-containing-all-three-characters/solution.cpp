class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        int i=0,j=0,ans=0;
        int n=s.length();
        while(j<n){
           mp[s[j]]++;
           while(mp['a']!=0 && mp['b']!=0 && mp['c']!=0){
            ans+=(n-j);
            mp[s[i]]--;
            i++;
           }
           j++;
        }
        return ans;
    }
};

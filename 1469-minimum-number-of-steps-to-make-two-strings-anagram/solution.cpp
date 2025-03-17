class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mp[t[i]]==0) ans++;
            else mp[t[i]]--;
        }
        return ans;
    }
};

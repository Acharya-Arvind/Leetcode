class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        int ans=0;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            reverse(s.begin(),s.end());
            if(mp.find(s)!=mp.end()){
                ans+=4;
                mp[s]--;
                if(mp[s]==0){
                    mp.erase(s);
                }
            }
            else{
                mp[words[i]]++;
            }
        }
        for(auto x:mp){
            if(x.first[0]==x.first[1]){
                ans+=2;
                break;
            }
        }
        return ans;
    }
};

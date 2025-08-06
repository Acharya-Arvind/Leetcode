class Solution {
public:
bool solve(const unordered_set<string>& dict, unordered_map<string, bool>& memo, const string& s) {
        if (s.length() == 0) return true;
        if (memo.find(s) != memo.end()) return memo[s];
        
        for (int i = 0; i < (int)s.length(); i++) {
            string t = s.substr(0, i + 1);
            if (dict.find(t) != dict.end() && solve(dict, memo, s.substr(i + 1))) {
                return memo[s] = true;
            }
        }
        
        return memo[s] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict;
        for (const string& word : wordDict) {
            dict.insert(word);
        }
        unordered_map<string, bool> memo;
        return solve(dict, memo, s);
    }
};

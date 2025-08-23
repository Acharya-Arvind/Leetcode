class Solution {
public:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--]) return false;
        }
        return true;
    }

    vector<vector<int>> palindromePairs(vector<string>& words) {
        unordered_map<string, int> reversedWordIndex;
        vector<vector<int>> result;

        // Map reversed word to its index
        for (int i = 0; i < words.size(); i++) {
            string reversed = words[i];
            reverse(reversed.begin(), reversed.end());
            reversedWordIndex[reversed] = i;
        }

        for (int i = 0; i < words.size(); i++) {
            const string& word = words[i];
            int len = word.length();

            // Split the word into prefix and suffix
            for (int j = 0; j <= len; j++) {
                string prefix = word.substr(0, j);
                string suffix = word.substr(j);

                // Case 1: If prefix is palindrome, check if reversed suffix exists
                if (isPalindrome(word, 0, j - 1)) {
                    auto it = reversedWordIndex.find(suffix);
                    if (it != reversedWordIndex.end() && it->second != i) {
                        result.push_back({it->second, i});
                    }
                }

                // Case 2: If suffix is palindrome, check if reversed prefix exists
                // j < len to avoid duplicates when prefix and suffix are both empty (j==0)
                if (j < len && isPalindrome(word, j, len - 1)) {
                    auto it = reversedWordIndex.find(prefix);
                    if (it != reversedWordIndex.end() && it->second != i) {
                        result.push_back({i, it->second});
                    }
                }
            }
        }

        return result;
    }
};


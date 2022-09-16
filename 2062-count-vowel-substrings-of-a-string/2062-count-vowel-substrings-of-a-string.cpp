class Solution {
public:
    bool vowelCheck(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    };
    int countVowelSubstrings(string s) {
        int ans = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp.clear();
            for (int j = i; j < s.size() && vowelCheck(s[j]); j++) {
                mp[s[j]]++;
                if (mp.size() == 5)
                {
                    ans+=1;
                }
            }
        }
        return ans;
    }
};
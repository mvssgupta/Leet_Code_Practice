class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sm=0,lr=0;
        while(sm<s.size() && lr<t.size())
        {
            if(s[sm]==t[lr]) sm++;
            lr++;
        }
        if((sm==s.size()) && (lr <=t.size())) return true;
        return false;
    }
};
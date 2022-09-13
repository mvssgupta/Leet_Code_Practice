class Solution {
public:
    bool ans(int n)
    {
        string s=to_string(n);
        for(int i=0;i<(s.size()/2);i++)
        {
            if(s[i]!=s[s.size()-i-1]) return false;
        }
        return true;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        return ans(x);
    }
};
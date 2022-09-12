class Solution {
public:
    char reVal(int num)
    {
        if (num >= 0 && num <= 9)
            return (char)(num + '0');
        else
            return (char)(num - 10 + 'A');
    }
    bool isPalindrome(string s)
    {
        for(int i=0;i<(s.size()/2);i++)
        {
            if(s[i]!=s[s.size()-i-1]) return false;
        }
        return true;
    }
    string baseX(int inputNum, int base)
    {
        string res = "";
        while (inputNum > 0) {
            res += reVal(inputNum % base);
            inputNum /= base;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    bool isStrictlyPalindromic(int n) {
        bool ans=true;
        for(int i=2;i<=n-2;i++)
        {
            ans = ans && isPalindrome(baseX(n,i));
        }
        return ans;
    }
};
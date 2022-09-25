class Solution {
public:
    string invert(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') s[i]='1';
            else s[i]='0';
        }
        return s;
    }
    string rec(int n)
    {
        if(n==1) return "0";
        string prev = rec(n-1);
        string inv = invert(prev);
        reverse(inv.begin(),inv.end()); 
        string ans =  prev+"1"+inv;
        return ans;
    }
    char findKthBit(int n, int k) {
        string ans = rec(n);
        return ans[k-1];
    }
};
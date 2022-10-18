class Solution {
public:
    string rec(string &s)
    {
        string ans;
        int i=0,count=1;
        while(i<s.size())
        {
            if(i<s.size() && s[i]==s[i+1]) 
            {
                count++;
            }
            else 
            {
                string t = to_string(count)+s[i];
                ans+=t;
                count=1;
            }
            i++;
        }
        return ans;
    }
    string countAndSay(int n) {
        string s="1";
        n--;
        while(n--)
        {
            s=rec(s);
        }
        return s;
    }
};
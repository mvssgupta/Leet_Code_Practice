class Solution {
public:
    
    bool isPalin(string ans)
    {
        for(int i=0;i<ans.size()/2;i++){
            if(ans[i]!=ans[ans.size()-i-1]) return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]) ||isdigit(s[i]))ans.push_back(tolower(s[i]));
        }
        return isPalin(ans);
    }
};
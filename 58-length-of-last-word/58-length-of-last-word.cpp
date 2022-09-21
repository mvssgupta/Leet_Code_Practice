class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,j=s.size()-1;
        while(j>=0)
        {
            if(isspace(s[j])) 
            {
                j--;
                continue;
            }
            else break;
        }
        while(j>=0 && !isspace(s[j]) )
        {
            ans++;
            j--;
        }
        return ans;
    }
};
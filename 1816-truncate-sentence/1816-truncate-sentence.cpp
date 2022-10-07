class Solution {
public:
    string truncateSentence(string s, int k) {
        int i,spaces=0;
        for(i=0;i<s.size();i++)
        {
            if(isspace(s[i])) spaces++;
            if(spaces==k) break;
        }
        return s.substr(0,i);
    }
};
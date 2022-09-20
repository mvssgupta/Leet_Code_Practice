class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0;int j=0;
        unordered_map<char,int> ump;
        int ans=0;
        while(j<s.size()){
            ump[s[j]]++;
            if(j-i+1<3)
            {
                j++;
            }
            else if(j-i+1==3)
            {
                if(ump.size()==3) ans++;
                if(ump[s[i]]==1) ump.erase(s[i]);
                else ump[s[i]]--;
                i++;j++;
            }
        }
        return ans;
    }
};
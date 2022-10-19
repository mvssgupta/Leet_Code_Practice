class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for(auto i:s)
        {
            freq[i]++;
        }
        bool flag=false;
        int index=s.size()-1;
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i]]==1)
            {
                index = min(index,i);
                flag=true;
            }
        }
        return (flag)?index:-1;
    }
};
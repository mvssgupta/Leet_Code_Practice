class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<ransomNote.size();i++)
        {
            mp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++)
        {
            mp2[magazine[i]]++;
        }
        int count=0;
        for(auto k:mp1)
        {
            auto it = mp2.find(k.first);
            if(it!=mp2.end() && k.second<=it->second)
            {
                count+=k.second;
            }
        }
        if(count==ransomNote.size()) return true;
        return false;
    }
};
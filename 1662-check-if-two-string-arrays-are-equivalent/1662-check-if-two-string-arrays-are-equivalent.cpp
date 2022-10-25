class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        //using two strings
        // string s1 ="";
        // for(auto i:word1)
        // {
        //     s1+=i;
        // }
        //  string s2 ="";
        // for(auto i:word2)
        // {
        //     s2+=i;
        // }
        // return s1==s2;
        
        
        //using a single string +  two pointers approach
        string s = "";
        for(string str : word1)
        {
            s+=str;
        }
        for(string str : word2)
        {
            s+=str;
        }
        int i=0,j=s.size()/2;
        while(j<s.size())
        {
            if(s[i++]!=s[j++]) return false;
        }
        return true;
    }
};
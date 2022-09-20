class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0;int j=0;
        unordered_map<char,int> ump;
        int ans=0;
        while(j<s.size()){
            ump[s[j]]++;
            if(j-i+1==3)//If we get a window of size 3 then we can check whether it has three distinct characters or not
            {
                if(ump.size()==3) ans++; //If it has three distinct characters , we can increment our ans
                if(ump[s[i]]==1) ump.erase(s[i]);
                else ump[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};
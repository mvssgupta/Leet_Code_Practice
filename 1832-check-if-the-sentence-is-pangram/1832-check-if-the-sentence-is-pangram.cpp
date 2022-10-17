class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        unordered_map<char,int> pangram;
        for(auto i:sentence)
        {
            pangram[i]++;
        }
        if(pangram.size()<26) return false;
        return true;
    }
};
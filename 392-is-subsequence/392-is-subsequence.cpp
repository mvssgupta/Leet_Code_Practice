class Solution {
public:
    bool isSubsequence(string s, string t) {
        //by using two pointers we can solve the below problem as follows.
        //here sm and lr are the pointers according to the constraints s is smaller than t,
        //so I take sm(small) to traverse string s and lr(large) to traverse string t
        
        //Intially both the pointers are at the 0th index , if we found a match we increment
        //both of them else we increment only the lr pointer.
        int sm=0,lr=0;
        while(sm<s.size() && lr<t.size())
        {
            if(s[sm]==t[lr]) sm++;
            lr++;
        }
        if((sm==s.size()) && (lr <=t.size())) return true;
        return false;
    }
};
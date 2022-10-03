class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()) return -1;
        if(needle=="")
            return 0;
        
        int i=0,j=0;
        while(i<haystack.size() && j<needle.size())
        {
            if(haystack[i]==needle[j])
            { 
                i++;       // when there is a match then increase both the pointers
                j++;
                if(j==needle.size()) // if the whole pattern has been matched then return
                    return i-needle.size();  
            }
            else
            { // when there is no match then start checking from the haystack index
                i=i-j+1;  // such that it goes backwards till whatever length has been matched 
                j=0; // and checks from next index and start checking from pattern's beginning
            }            
        }        
        return -1;  
    }
};
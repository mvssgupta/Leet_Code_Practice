class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int i=0,j=0,count=0;
        string ch="";
        while(j<s.size())
        {
            ch+=s[j];
            if((j-i+1)==k)   //if we found a subseq of length k then we are going to check whether it satisfies our given condition or not
            {
                int subseq = stoi(ch);     //converting the current subsequence into integer
                if( subseq!=0 && (num%subseq)==0) count++;      //if the current subsequence is not zero and if it multiple of given number 'num' then we can increment our count by 1
                ch[i]='0';                //here we are reseting the first integer to zero , since our sliding window has to be moved.
                i++;
            }
            j++;
        }
        return count;
    }
};
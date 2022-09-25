class Solution {
public:
    /*
    observe the pattern:-
    s1 = "0"
    s2 = "011"
    s3 = "0111001"
    
    we can observe that len(s2) = (2^2) -1 , so for n the length is (2^n)-1
    and the middle bit is always 1 , and the bits after the mid is exactly inverse,
    so if k is lesser than mid then we can return the bit at s(n-1)
    else we have to return inverse of s(n-1)'s (n-1-k)th bit ,  why because look at the following -
    
    s3 = 0111001 => s2+1+reverse(s2), here s2 = 011 , so s3 = 011 + 1 + 110 , so if k is greater than mid , 
    we have to return inverse from begining, let k=5 then we have to return 2^3 = 8 , 8-k => 8-5=3 , so inverse of 3rd bit.
    */
    
    //brute force approach
    // string invert(string s)
    // {
    //     for(int i=0;i<s.size();i++)
    //     {
    //         if(s[i]=='0') s[i]='1';
    //         else s[i]='0';
    //     }
    //     return s;
    // }
    // string rec(int n)
    // {
    //     if(n==1) return "0";
    //     string prev = rec(n-1);
    //     string inv = invert(prev);
    //     reverse(inv.begin(),inv.end()); 
    //     string ans =  prev+"1"+inv;
    //     return ans;
    // }
    

    char findKthBit(int n, int k) {
        // string ans = rec(n);
        // return ans[k-1];
        if(n==1) return '0';
        int ans = (pow(2,n)-1)/2;         //calculating the mid value
        if(k==ans+1) return '1';     //if k is exactly pointing to the centre bit , we can return 1 , since center bit is always one.
        if(k<ans+1) return findKthBit(n-1,k);   //if k is less than half size of the string then we can say it value is same as string(n-1).
        int val = findKthBit(n-1,pow(2,n)-k);
        return (val=='0')?'1':'0';
    }
};
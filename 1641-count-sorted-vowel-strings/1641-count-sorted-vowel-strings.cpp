class Solution {
public:
    // 		 a  e  i  o  u
    // n=1   1  1  1  1  1  /a, e, i, o, u
    // n=2   5  4  3  2  1  /a-> aa,ae,ai,ao,au | e-> ee,ei,eo,eu | i-> ii,io,iu | o-> oo,ou | u-> uu
    // n=3   15 10 6  3  1
    
    
    //here u is always one since no vowel is greater than o.
    //u can clearly see that , for any value of n if we need to find the for vowel -> 'x' it's value is x's previous value and value of vowel x-1 
    //for suppose observe at n=2 , value of o is o's previous value and u's current value , similary for other vowels also.
     int countVowelStrings(int n) {
        int a=1, e=1, i=1, o=1, u=1;
        
        while(--n){
            o += u;
            i += o;
            e += i;
            a += e;
        }
        
        return a+e+i+o+u;
    }
};
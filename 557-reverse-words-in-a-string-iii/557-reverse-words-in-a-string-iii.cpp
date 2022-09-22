class Solution {
public:
    //this logic is also same as two pointers but I have used extra strings(ie. ans,subs) to do the problem
    // string reverseWords(string s) {
    //   int i=0;
    //   string ans="";
    //   string subs = "";
    //   while(i<s.size())
    //   {
    //       if(!isspace(s[i]))
    //       {
    //           subs+=s[i];
    //       }
    //       else{
    //           reverse(subs.begin(),subs.end());
    //           ans+=subs+" ";
    //           subs = "";
    //       }
    //       i++;
    //   }
    //  reverse(subs.begin(),subs.end());
    // ans+=subs;
    // return ans;
    // }
    
    //using two pointers
        string reverseWords(string s) {
        int start=0;
        for(int end=0;end<s.size();end++){
            if(s[end]==' ') //increment end pointer until u find a space , if u get a space then reverse the string upto that place.
            { 
                reverse(s.begin()+start, s.begin()+end);     //reversing the string upto that place.
                start=end+1;                                 //updating the start pointer for next word reversal
            }
        }
        reverse(s.begin()+start,s.end());//we have to explicitly reverse the last word,as the last word don't has ' '(space) at the end;
        return s;
    }
};
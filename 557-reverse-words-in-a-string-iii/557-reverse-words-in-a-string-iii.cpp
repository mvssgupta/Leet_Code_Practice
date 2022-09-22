class Solution {
public:
    string reverseWords(string s) {
      int i=0;
      string ans="";
      string subs = "";
        cout<<s.size();
      while(i<s.size())
      {
          if(!isspace(s[i]))
          {
              subs+=s[i];
          }
          else{
              reverse(subs.begin(),subs.end());
              ans+=subs+" ";
              subs = "";
          }
          i++;
      }
     reverse(subs.begin(),subs.end());
    ans+=subs;
    return ans;
    }
};
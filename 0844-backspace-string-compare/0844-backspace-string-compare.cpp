class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(auto i:s)
        {
            if(i=='#' && !st.empty())
                st.pop();
            else if(i!='#') st.push(i);
        }
        s="";
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        for(auto i:t)
        {
            if(i=='#' && !st.empty())
                st.pop();
            else if(i!='#') st.push(i);
        }
        t="";
        while(!st.empty())
        {
            t.push_back(st.top());
            st.pop();
        }
      return s==t;
    }
};
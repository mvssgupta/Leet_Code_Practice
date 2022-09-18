class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        string ans="";
        int i=a.size()-1,j=b.size()-1;
        for(;i>=0 || j>=0;i--,j--)
        {
            int z = ((i>=0)?(a[i]-'0'):0)+((j>=0)?(b[j]-'0'):0)+c;
            if(z==0) ans.push_back('0');
            else if(z==1) 
            {
                ans.push_back('1');
                c=0;
            }
            else if(z==2)
            {
                ans.push_back('0');
                c=1;
            }
            else if(z==3)
            {
                ans.push_back('1');
                c=1;
            }
        }
        for(;i>=0;i--)
        {
            ans.push_back(a[i]);
        }
        for(;j>=0;j--)
        {
            ans.push_back(b[j]);
        }
        if(c==1) ans.push_back('1');
        reverse(begin(ans),end(ans));
        return ans;
    }
};
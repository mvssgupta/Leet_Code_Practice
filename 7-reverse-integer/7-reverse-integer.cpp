class Solution {
public:
    void reverseStr(string& str)
    {
        int n = str.length();
        for (int i = 0; i < n / 2; i++)
            swap(str[i], str[n - i - 1]);
    }
    int reverse(int x) {
        int flag=0;
        if(x<0) flag=1;
        string s=to_string(x);
        int len = s.size();
        reverseStr(s);
        while(*s.begin()==0)
        {
            s=s.substr(1,len);
        }
        if(stol(s)>pow(2,31) || stol(s)<pow(2,-31)) return 0;
        return (flag==1)?-1*stol(s):stol(s);
    }
};
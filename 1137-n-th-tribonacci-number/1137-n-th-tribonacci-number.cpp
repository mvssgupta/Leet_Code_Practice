class Solution {
public:
    int dp[38];
    int rec(int n)
    {
       if(n==0) return dp[0]=0;
        if(n==1 || n==2) return dp[n]=1; 
        if(dp[n]!=-1) return dp[n];
        dp[n-1]= rec(n-1);
        dp[n-2] = rec(n-2);
        dp[n-3] = rec(n-3);
        return dp[n-1] + dp[n-2] + dp[n-3];
        
    }
    int tribonacci(int n) {
        memset(dp,-1,sizeof(dp));
        return rec(n);
    }
};
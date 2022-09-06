class Solution {
public:
    int dp[101][101];
    int rec(int i, int j , int &m , int &n)
    {
        if (i > m || j > n)
            return 0;
        if ((i == m - 1) && (j == n - 1))
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        dp[i][j] = 0;
        dp[i][j] += rec(i + 1, j,m,n) + rec(i, j + 1,m,n);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return rec(0,0,m,n);
    }
};
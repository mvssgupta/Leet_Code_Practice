class Solution {
public:
    int dp[202][202];
    int rec(int i,int j,int &n,int &m ,vector<vector<int>>& grid )
    {
        if(i==n-1 && j == m-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j]=INT_MAX;
        if(i<n && j<m)
            dp[i][j] = grid[i][j] + min(rec(i+1,j,n,m,grid),rec(i,j+1,n,m,grid));
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int n=grid.size();
        int m=grid[0].size();
        return rec(0,0,n,m,grid);
    }
};
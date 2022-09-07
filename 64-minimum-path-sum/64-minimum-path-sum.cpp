class Solution {
public:
    int dp[202][202];
    int rec(int i,int j,vector<vector<int>>& grid )
    {
        int n=grid.size(),m=grid[0].size();
        if(i==n-1 && j == m-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j]=INT_MAX;
        if(i<n && j<m)
            dp[i][j] = grid[i][j] + min(rec(i+1,j,grid),rec(i,j+1,grid));
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return rec(0,0,grid);
    }
};
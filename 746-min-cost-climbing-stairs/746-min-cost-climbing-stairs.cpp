class Solution {
public:
    int dp[1001];
    int rec(int level , vector<int>& cost)
    {
        if(level>=cost.size()) return 0;
        if(dp[level]!=-1) return dp[level];
        return dp[level] = cost[level] + min(rec(level+1,cost),rec(level+2,cost));
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        //The intution is we have to calculate from 0'th position and 1st position and 
        //then we have to return the min of the two.
        //for calculation we have to return that cell cost plus minimum of cell+1,cell+2.
        memset(dp,-1,sizeof(dp));
        int zero = rec(0,cost);
        memset(dp,-1,sizeof(dp));
        int first = rec(1,cost);
        return min(zero,first);
    }
};
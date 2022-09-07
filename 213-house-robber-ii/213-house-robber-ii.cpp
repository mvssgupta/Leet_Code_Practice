class Solution {
public:
    int dp[102];
    int rec(int house,int &n,vector<int>& nums )
    {
        if(dp[house]!=-1) return dp[house];
        dp[house] = 0;
        if(house<n)
            dp[house] = max(nums[house]+rec(house+2,n,nums),rec(house+1,n,nums));
        return dp[house];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        //This problem is also similar to house rob I , but here is a small change , here the houses are arranged in a circular manner. so we can first calculate from 0 to n-1 and store it in some variable and again calculate from 1 to n and store it another value and return the maximum of the above two values.
        int n = nums.size();
        int m = n-1;
        memset(dp,-1,sizeof(dp));
        int val1 = rec(0,m,nums);
        memset(dp,-1,sizeof(dp));
        int val2 = rec(1,n,nums);
        return max(val1,val2);
    }
};
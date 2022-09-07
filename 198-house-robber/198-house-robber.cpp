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
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        cout<<n<<endl;
        return rec(0,n,nums);
    }
};
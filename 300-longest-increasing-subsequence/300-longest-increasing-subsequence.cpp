class Solution {
public:
    
    int dp[2502];

    int rec(int level,vector<int> &nums)
    {
        // pruning
        if (level <= 0)
            return 1;
        // basecase

        // cache check
        //checking whether it is previously computed or not
        if(dp[level]!=-1) return dp[level];
        // calculation
        int ans = 1;
        for (int prev_taken = 0; prev_taken < level; prev_taken++)
        {
            if (nums[prev_taken] < nums[level])
            {
                ans = max(ans, 1 + rec(prev_taken,nums));
            }
        }
        // save and return
        return dp[level]=ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int ans = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = max(ans, rec(i,nums));
        }
        return ans;
    }
    
    //time complexity : O(#states)(1+avg no of transitions)
    //here the states are from 0 to n so it is O(n) and the 
    // transitions are also n , so the time complexity would be O(n^2)
};
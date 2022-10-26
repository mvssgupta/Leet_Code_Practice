class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        int prefixSum = 0;
        for(int i=0;i<nums.size();i++)
        {
            prefixSum += nums[i];
            if(mp.find(prefixSum%k)!=mp.end())
            {
                if((i - mp[(prefixSum%k)])>1) return true;
            }
            else {
                mp[prefixSum%k]=i;    
            }
            
        }
        return false;
    }
};
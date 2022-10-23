class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        int rNum,N=nums.size();
        for(auto i:nums)
        {
            mp[i]++;
            if(mp[i]==2)
            {
                rNum=i;            
                break;
            }
        }
        int givenSum = accumulate(nums.begin(),nums.end(),0);
        int reqSum = (N*(N+1))/2;
        int missedNum = reqSum-givenSum+rNum;
        return {rNum,missedNum};
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ump;
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            ump[nums[i]]++;
            if(ump[nums[i]]>nums.size()/2) ans = nums[i];
        }
        return ans;
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //using map.
        // unordered_map<int,int> checkForDup;
        // for(auto i:nums)
        // {
        //     checkForDup[i]++;
        // }
        // return checkForDup.size()!=nums.size();
        
        //using sorting
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
        
    }
};
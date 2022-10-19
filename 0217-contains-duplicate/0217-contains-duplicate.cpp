class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> checkForDup;
        for(auto i:nums)
        {
            checkForDup[i]++;
        }
        return checkForDup.size()!=nums.size();
    }
};
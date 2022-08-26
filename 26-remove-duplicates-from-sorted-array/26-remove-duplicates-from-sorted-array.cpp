class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(auto i:nums)
        {
            s.insert(i);
        }
        int i=0;
        for(auto it=s.begin();it!=s.end();it++,i++)
        {
            nums[i]=*it;
        }
        return s.size();
    }
};
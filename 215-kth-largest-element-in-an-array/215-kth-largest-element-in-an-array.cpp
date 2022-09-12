class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minheap(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            if(minheap.size()>k)
                minheap.pop();
        return minheap.top();
    }
};
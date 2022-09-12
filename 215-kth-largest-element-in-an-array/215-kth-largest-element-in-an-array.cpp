class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //using minheap in stl
        // priority_queue<int,vector<int>,greater<int>> minheap;
        // for(int i=0;i<nums.size();i++){
        //     minheap.push(nums[i]);
        //     if(minheap.size()>k) minheap.pop();
        // }
        // return minheap.top();
        
        //using nth_element in stl
        nth_element(nums.begin(),nums.begin()+nums.size()-k,nums.end());
	    return nums[nums.size()-k];
    }
};
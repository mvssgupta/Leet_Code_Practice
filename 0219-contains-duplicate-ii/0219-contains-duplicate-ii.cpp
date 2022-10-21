class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0,j=0;          //i and j are starting and ending indices of sliding window
        unordered_map<int,int> ump;    //unordered map is used to maintain the count of occurence of an element.
        while(j<nums.size())
        {
            ump[nums[j]]++;    
            if((j-i)>k)
            {
                ump[nums[i]]--;      //sliding the window and removing the count of the elements that are no longer needed to be considered , since they are not in the window.
                i++;
                
            }
            if(ump[nums[j]]==2) return true;     //If the current window size is less than or equal to k and the count of current element is 2 then we can say that we have two same elements in the current window 
            j++;
        }
        return false;
    }
};
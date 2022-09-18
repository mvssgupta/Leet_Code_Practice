class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        int count=0,i=0,j=nums.size()-1;
        while(i!=j && i<j)
        {
            if(nums[i]!=val) i++;
            if(nums[i]==val)
            {
                if(nums[j]!=val)
                {
                    swap(nums[i++],nums[j--]);
                    count++;
                } 
                else j--;
            }
        }
        if(nums[i]==val) return i;
        return i+1;
    }
};
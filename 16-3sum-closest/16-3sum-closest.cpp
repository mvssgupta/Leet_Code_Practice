class Solution {
public:
    //solving by using two pointers approach
    int threeSumClosest(vector<int>& nums, int target) {
            sort(nums.begin(),nums.end());
            int n=nums.size();
            int sum=nums[0]+nums[1]+nums[2];
            for(int i=0;i<n-2;i++){ 
                int j=i+1;
                int k=n-1;
                while(j<k){
                    int tempSum=nums[i]+nums[j]+nums[k];
                    if(abs(tempSum-target) < abs(sum-target) ) sum=tempSum;
                    if(tempSum>target) k--;                 
                    else if(tempSum<target) j++;           
                    else return target;
                }

            }
            return sum; 
    }
};
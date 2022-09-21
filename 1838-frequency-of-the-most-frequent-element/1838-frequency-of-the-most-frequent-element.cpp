class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long i = 0, numsLen = nums.size(), ans = 1, sum = 0;  //ans variable is the maximum window size , in general the default max-window length can be 1 , why because the minimum number of elements in nums vector is 1.
        for (int j = 0; j < numsLen; j++) {
            sum += nums[j];
            while ((j - i + 1) * nums[j] - sum > k) //this is the invalid case , so we are shrinking the window from the front,but what is valid means , for example we have nums array as {1,2,3} , if we want to make it maximum we increase all the elements to three which means , (3+3+3) , which is 3*nums[j] ,  here nums[j] is 3. so how much needed to make all the remaining numbers three , that is let be x = (3*3 - (1+2+3)) , this should be less than or equal to k , then only the current window is maximum.
            {
                sum -= nums[i];
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans; 
    }
};
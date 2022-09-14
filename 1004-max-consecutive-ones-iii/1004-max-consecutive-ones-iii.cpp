class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        //using sliding window concept
        int windowStart=0,windowEnd=0,noOfZeros=0,noOfOnes=0,ans = 0;
        while(windowEnd < arr.size()) {
            if (arr[windowEnd++]) noOfOnes++;     //calculating the no.of ones
            else noOfZeros++;                     //calculating the no.of zeros
            while(noOfZeros > k) {                //If the no.of zeros are greater than k we can check whether start pointer is pointing to 0 or 1 , if it is pointing to 1 then  decrement the no of ones else decrement the no of zeros.
                if (arr[windowStart++]) noOfOnes--;
                else noOfZeros--;
            }
            ans = max(ans, noOfZeros + noOfOnes);  //storing the so far maximum consecutive ones
        } 
        return ans;
    }
};
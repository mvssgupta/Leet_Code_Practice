class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        //brute force approach -> O(NlogN)time complexity
        // sort(arr.begin(),arr.end());
        // int diff = arr[1]-arr[0];
        // for(int i=0;i<arr.size()-1;i++){
        //     if(arr[i+1]-arr[i] != diff) return false;
        // }
        // return true;
        
        //optimized solution->  O(N) time complexity
        int mn = *min_element(arr.begin(), arr.end()), mx = *max_element(arr.begin(), arr.end());
        if ((mx - mn) % (arr.size() - 1)!=0) return false;
        int diff = (mx - mn) / (arr.size() - 1);
        for (int i = 0; i < arr.size();) {
            if (arr[i] == mn + i * diff) ++i;
            else if (((arr[i] - mn) % diff)!=0) return false;
            else {
                int j = (arr[i] - mn) / diff;
                if (j < i || arr[i] == arr[j]) return false;
                swap(arr[i], arr[j]);
            }
        }
        return true;
    }
};
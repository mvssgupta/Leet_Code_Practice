class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(arr.size()==1) return arr;
        int i=0,j=arr.size()-1;
        while(j-i+1>k){
            if(x-arr[i]>arr[j]-x) i++;
            else j--;
        }
        return vector<int>(arr.begin()+i,arr.begin()+j+1);
    }
};
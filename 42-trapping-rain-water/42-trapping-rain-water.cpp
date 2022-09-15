class Solution {
public:
    
    //This fun is used to calculate the previous-maximum-value
    vector<int> PreMaxEle(vector<int> arr){
        vector<int> ans; 
        stack <int> s; 
        for (int i=0;i<arr.size();i++){
            if(s.empty()) {
                s.push(arr[i]);
                ans.push_back(0);
            }
            else if(!s.empty() && s.top()>arr[i]) ans.push_back(s.top());
            else if(!s.empty() && s.top()<=arr[i]){
                ans.push_back(s.top());
                s.pop();
                s.push(arr[i]);
            }
            if(arr[i]>s.top()) s.push(arr[i]); 
        }
        return ans;
    }
    
    //This fun is used to calculate the next-maximum-value
    vector<int> NextMaxEle(vector<int> arr){
        vector<int> ans; 
        stack <int> s; 
        for (int i=arr.size()-1;i>=0;i--){
            if(s.empty()) {
                s.push(arr[i]);
                ans.push_back(0);
            }
            else if(!s.empty() && s.top()>arr[i]) ans.push_back(s.top());
            else if(!s.empty() && s.top()<=arr[i]){
                ans.push_back(s.top());
                s.pop();
                s.push(arr[i]);
            }
            if(arr[i]>s.top()) s.push(arr[i]); 
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int trap(vector<int>& v1) {
        vector<int> leftMax = PreMaxEle(v1);
        vector<int> rightMax = NextMaxEle(v1);
        int waterInTrap = 0;
        for(int i=0;i<v1.size();i++){
            int water  = min(leftMax[i],rightMax[i])-v1[i];  //Calculating the amount of water at every i'th position
            waterInTrap += (water>0)?water:0; //If it is greater than zero we're adding it to totalWaterInTrap
        }
        return waterInTrap; //returning the final answer.
    }
};
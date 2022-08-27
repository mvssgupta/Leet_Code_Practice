class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> v;
        int ind=0;
        for(int i=0;i<matrix.size();i++)
        {
            if(target<matrix[i][0]){
                ind=i-1;
                break;
            }
            else ind=i;
        }
        if(ind<0) return false;
        for(int i=0;i<matrix[0].size();i++)
        {
            if(matrix[ind][i]==target) return true;
        }
        return false;
    }
};
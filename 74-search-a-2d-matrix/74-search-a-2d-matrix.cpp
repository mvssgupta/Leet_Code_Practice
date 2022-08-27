class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto r:matrix)
        {
            for(auto i:r)
            {
                if(i==target) return true;
            }
        }
        return false;
    }
};
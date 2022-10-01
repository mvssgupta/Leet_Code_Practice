class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int m = v[0].size();
        int n= v.size();
        vector<int> row(n,1);
        vector<int> col(m,1);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(v[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
          for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if((row[i]==0)||(col[j]==0)) 
                    v[i][j]=0;
    }
};
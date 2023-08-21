class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        int c=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int z=0;
                if(matrix[i][j]==1)
                {
                    if(j>0 && matrix[i][j-1]==0)
                    z++;
                    if(i>0 && j>0 && matrix[i-1][j-1]==0)
                    z++;
                    if(j<m-1 && matrix[i][j+1]==0)
                    z++;
                    if(i>0 && j<m-1 && matrix[i-1][j+1]==0)
                    z++;
                    if(i<n-1 && matrix[i+1][j]==0)
                    z++;
                    if(i<n-1 && j>0 && matrix[i+1][j-1]==0)
                    z++;
                    if(i<n-1 && j<m-1 && matrix[i+1][j+1]==0)
                    z++;
                    if(i>0 && matrix[i-1][j]==0)
                    z++;
                    if(z!=0 && z%2==0)
                    c++;
                }
            }
        }
        return c;
        // Code here
    }
};

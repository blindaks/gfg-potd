class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        vector<int>ans;
        for(int iq=0;iq<q;iq++)
        {
            int i=queries[iq][1];
            int j=queries[iq][2];
            int sum=0;
            if(queries[iq][0]==1)
            {
                if(i-1>=0 && j-1>=0)
                sum+=mat[i-1][j-1];
                if(i-1>=0)
                sum+=mat[i-1][j];
                if(i-1>=0 && j+1<m)
                sum+=mat[i-1][j+1];
                if(j+1<m)
                sum+=mat[i][j+1];
                if(j-1>=0)
                sum+=mat[i][j-1];
                if(i+1<n && j-1>=0)
                sum+=mat[i+1][j-1];
                if(i+1<n)
                sum+=mat[i+1][j];
                if(i+1<n && j+1<m)
                sum+=mat[i+1][j+1];
            }
            else
            {
                if(i-2>=0 && j-2>=0)
                sum+=mat[i-2][j-2];
                if(i-2>=0 && j-1>=0)
                sum+=mat[i-2][j-1];
                if(i-2>=0 && j+1<m)
                sum+=mat[i-2][j+1];
                if(i-2>=0 && j+2<m)
                sum+=mat[i-2][j+2];
                if(i-2>=0)
                sum+=mat[i-2][j];
                if(i+2<n)
                sum+=mat[i+2][j];
                if(i-1>=0 && j-2>=0)
                sum+=mat[i-1][j-2];
                if(i+1<n && j-2>=0)
                sum+=mat[i+1][j-2];
                if(i-1>=0 && j+2<m)
                sum+=mat[i-1][j+2];
                if(j-2>=0)
                sum+=mat[i][j-2];
                if(j+2<m)
                sum+=mat[i][j+2];
                if(i+1<n && j+2<m)
                sum+=mat[i+1][j+2];
                if(i+2<n && j-2>=0)
                sum+=mat[i+2][j-2];
                if(i+2<n && j-1>=0)
                sum+=mat[i+2][j-1];
                if(i+2<n && j+1<m)
                sum+=mat[i+2][j+1];
                if(i+2<n && j+2<m)
                sum+=mat[i+2][j+2];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

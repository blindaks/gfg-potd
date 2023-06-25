class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        vector<vector<int>>v;
        for(int i=0;i<row;i++)
        {
            vector<int>x;
            for(int j=0;j<col;j++)
            {
                x.push_back(M[i][j]);
            }
            if(count(v.begin(),v.end(),x)==0)
            v.push_back(x);
        }
        return v;
        //Your code here
    }
};

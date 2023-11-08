class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        int n=matrix.size();
        vector<int>snake;
        for(int i=0;i<n;i++)
        {
            int x=0;int k=1;
            if(i%2)
            {
                x=n-1;
                k=-1;
            }
            for(int j=x;j<n && j>=0;j+=k)
            {
                snake.push_back(matrix[i][j]);
            }
        }
        return snake;
    }
};

class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int>>matrix, int n)
    {
        vector<int>sr(n,0);
        vector<int>sc(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sr[i]+=matrix[i][j];
                sc[i]+=matrix[j][i];
            }
        }
        int maxr=*max_element(sr.begin(),sr.end());
        int maxc=*max_element(sc.begin(),sc.end());
        int ar=0;
        for(auto it:sr)
        {
            ar+=maxr-it;
        }
        int ac=0;
        for(auto it:sc)
        {
            ac+=maxc-it;
        }
        return max(ar,ac);
        // code here 
    } 
};

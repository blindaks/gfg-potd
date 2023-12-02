class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        int x[N];
        for(int i=0;i<N;i++)
        {
            x[i]=arr[i];
        }
        sort(x,x+N);
        for(int i=0;i<N;i++)
        {
            if(x[i]!=arr[i])
            return 0;
        }
        return 1;
    }
};

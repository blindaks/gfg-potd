class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int ans=INT_MAX;
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(abs(arr[i]-k)<=ans)
            {
                ans=abs(arr[i]-k);
                x=arr[i];
            }
            else if(abs(arr[i]-k)>ans)
            {
                return x;
            }
        }
        return x;
    } 
};

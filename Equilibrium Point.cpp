class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int start[n], end[n];
        start[0]=a[0];end[n-1]=a[n-1];
        for(int i=1;i<n;i++)
        start[i]=a[i]+start[i-1];
        for(int i=n-2;i>=0;i--)
        end[i]=end[i+1]+a[i];
        for(int i=0;i<n;i++)
        {
            if(start[i]==end[i])
            return i+1;
        }
        return -1;
    }

};

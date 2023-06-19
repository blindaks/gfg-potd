class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        long long temp[n];
        for(int i=0;i<n;i++)
        temp[i]=arr[arr[i]];
        for(int i=0;i<n;i++)
        arr[i]=temp[i];
        // Your code here
        
    }
};

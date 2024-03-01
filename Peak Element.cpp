/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(n==1) return 0;
       if(arr[0]>arr[1]) return 0;
       for(int i=1;i<n-2;i++)
       {
           if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
           return i;
       }
       if(arr[n-1]>arr[n-2]) return n-1;
    }
};

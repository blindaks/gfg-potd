
class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Your code here
        long long ans=0;
        long long x=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                x+=arr[i];
                ans=max(ans,x);
            }
            else
            {
                x=0;
            }
        }
        return ans;
    }
};

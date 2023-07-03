class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        int i=0;
        int j=n-1;
        int c=0;
        while(i<j)
        {
            if(arr[i]<=arr[j])
            {
                c=max(c,j-i);
                i++;
                j=n-1;
            }
            else
            j--;
        }
        return c;
    }
};

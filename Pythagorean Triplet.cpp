class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        a[i]=arr[i]*arr[i];
	    }
	    sort(a,a+n);
	    int x=n-1;
	    int i=0, j=n-2;
	    while(i<j)
	    {
	        if((a[i]+a[j])>a[x])
	        j--;
	        else if((a[i]+a[j])<a[x])
	        i++;
	        else if((a[i]+a[j])==a[x])
	        return true;
	        if(i>=j)
	        {
	            x--;j=x-1;i=0;
	        }
	    }
	    return false;
	}
};

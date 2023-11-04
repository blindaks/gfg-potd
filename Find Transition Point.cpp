class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int x=lower_bound(arr,arr+n ,1)-arr;
        if(x==n)
        return -1;
        return x;
    }
};

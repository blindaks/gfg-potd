#include<bits/stdc++.h>
class Solution{
public:
    bool solve(int arr[], int n, int s1, int s2, int sum, int i)
    {
        if(i>=n)
        {
            if(s1==s2)
            {
                return true;
            }
            return false;
        }
        if(s1>sum/2 || s2>sum/2)
        return false;
        if (solve(arr, n, s1+arr[i], s2, sum, i+1))
        return true;
        else 
        return solve(arr, n, s1, s2+arr[i], sum, i+1);
    }
    int equalPartition(int n, int arr[])
    {
        int sum=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        sum+=arr[i];
        if(sum%2)
        return 0;
        return solve(arr, n, 0, 0, sum, 0);
        // code here
    }
};

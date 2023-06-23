#include<bits/stdc++.h>
class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        string x=str.substr(0,k);
        int count=0;
        for(int i=0;i<n;i++)
        {
            string t=arr[i].substr(0,k);
            if(arr[i].length()>=k && t==x)
            count++;
        }
        return count;
    }
};

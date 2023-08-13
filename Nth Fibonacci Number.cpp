#include<bits/stdc++.h>
class Solution {
  public:
    int nthFibonacci(int n){
        const long long MOD = 1000000007;
        if(n==0) 
        return 0;
        if(n==1) 
        return 1;
        long long a=0,b=1;
        for(int i=2;i<=n;i++) 
        {
            long long next=(a+b)%MOD;
            a=b;
            b=next;
        }
        return b;
        // code here
    }
};

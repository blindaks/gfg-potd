#include<bits/stdc++.h>
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        int mx=x;
        for(int i=0;i<l-1;i++){
            mx=mx/2;
            y=y/2;
        }
        for(int i=l-1;i<=r-1;i++){
            int modx=mx%2;
            int mody=y%2;
            if(mody==1&&modx==0){
                x=x+pow(2,i);
            }
            mx=mx/2;
            y=y/2;
        }
        return x;
    }
};

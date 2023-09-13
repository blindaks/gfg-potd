#include<bits/stdc++.h>
class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string ans="";
        if((9*N)<S)
        return "-1";
        while(S!=0)
        {
            if(S<10)
            {
                ans+=to_string(S);
                break;
            }
            else
            {
                ans+="9";
                S-=9;
            }
        }
        int x=ans.length();
        while(x<N)
        {
            ans+="0";
            x++;
        }
        if(ans[0]=='0' && N>1)
        return "-1";
        return ans;
    }
};

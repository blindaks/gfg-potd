#include<bits/stdc++.h>
class Solution{
public:	
		int isDivisible(string s){
	    int i,odd=0,even=0,l=s.size();
	    for(i=0;i<l;i++)
	    {
	        if(s[i]=='1')
	        {
	            if(i%2)
	            odd++;
	            else 
	            even++;
	        }
	    }
	    if((odd-even)%3==0)
	    return 1;
	    else
	    return 0;
	    //complete the function here
	}
};

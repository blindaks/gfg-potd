#include<bits/stdc++.h>
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char,int>m;
        int r=0;
        int i=0;
        int j=0;
        while(i<s.size())
        {
            if(m.size()<=k)
            {
                m[s[i]]++;
                i++;
            }
            if(m.size()==k)
            {
                r=max(r,i-j);
            }
            if(m.size()>k)
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                {
                    m.erase(s[j]);
                }
                j++;
            }
        }
        if(r!=0)
        return r;
        return -1;
    // your code here
    }
};

#include<bits/stdc++.h>
class Solution{
public:
    void Reverse(stack<int> &St){
        vector<int>v;
        while(!St.empty())
        {
            v.push_back(St.top());
            St.pop();
        }
        for(int i=0;i<v.size();i++)
        {
            St.push(v[i]);
        }
    }
};

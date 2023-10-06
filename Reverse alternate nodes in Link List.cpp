#include<bits/stdc++.h>
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
        vector<int>v;
        Node* temp=odd;
        while(temp!=NULL)
        {
            v.push_back(temp->data);
            if(temp->next==NULL) break;
            temp=temp->next->next;
        }
        vector<int>x;
        temp=odd->next;
        while(temp!=NULL)
        {
            x.push_back(temp->data);
            if(temp->next==NULL) break;
            temp=temp->next->next;
        }
        temp=odd;
        for(auto i:v)
        {
            temp->data=i;
            temp=temp->next;
        }
        reverse(x.begin(),x.end());
        for(auto i:x)
        {
            temp->data=i;
            temp=temp->next;
        }
    }
};

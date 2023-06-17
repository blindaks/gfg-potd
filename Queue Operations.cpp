#include<bits/stdc++.h>
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        q.push(k);
        // Your code here
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        queue<int>x;
        int count=0;
        while(!q.empty())
        {
            int z=q.front();
            if(z==k)
            count++;
            x.push(z);
            q.pop();
        }
        while(!x.empty())
        {
            int y=x.front();
            q.push(y);
            x.pop();
        }
        return count;
        // Your code here
    }
    
};

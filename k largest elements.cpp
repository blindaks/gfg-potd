#include<bits/stdc++.h>
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    vector<int>v;
	    priority_queue<int,vector<int>,greater<int>>pq;
	    for(int i=0;i<n;i++)
	    {
	        pq.push(arr[i]);
	        if(pq.size()>k)
	        pq.pop();
	    }
	    while(!pq.empty())
	    {
	        v.push_back(pq.top());
	        pq.pop();
	    }
	    sort(v.begin(),v.end(),greater<int>());
	    return v;
	    // code here
	}
};

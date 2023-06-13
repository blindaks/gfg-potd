class Solution {
  public:
    long long maxDiamonds(int a[], int n, int k) {
        long long ans=0;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        pq.push(a[i]);
        for(int i=1;i<=k;i++)
        {
            int x=pq.top();
            ans+=x;
            pq.pop();
            pq.push(x/2);
        }
        return ans;
        // code here
    }
};

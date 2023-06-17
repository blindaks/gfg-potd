class Solution {
  public:
    int distributeTicket(int N, int K) {
        queue<int>a;
        queue<int>b;
        for(int i=1;i<=N;i++)
        a.push(i);
        for(int i=N;i>=1;i--)
        b.push(i);
        
        for(int i=0;i<N;i++)
        {
            if(a.front()==b.front())
                return a.front();
            for(int j=0;j<K;j++)
            {
                a.pop();
                if(a.front()==b.front())
                return a.front();
            }
            for(int j=0;j<K;j++)
            {
                b.pop();
                if(a.front()==b.front())
                return a.front();
            }
        }
        return a.front();
        // code here
    }
};

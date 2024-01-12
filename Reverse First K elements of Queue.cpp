// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        vector<int>v;
        while(k--)
        {
            v.push_back(q.front());
            q.pop();
        }
        queue<int>qq;
        for(int i=v.size()-1;i>=0;i--)
        {
            qq.push(v[i]);
        }
        while(!q.empty())
        {
            qq.push(q.front());
            q.pop();
        }
        return qq;
    }
};

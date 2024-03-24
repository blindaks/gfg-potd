//User function Template for C++

class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        vector<int>v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        st.push(x);
        reverse(v.begin(),v.end());
        for(int i:v)
        st.push(i);
        return st;
    }
};

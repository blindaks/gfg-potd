

/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        vector<int>v;
        while(n--)
        {
            v.push_back(q.front()->data);
            Node* x=q.front();
            if(x->left!=NULL)
            q.push(x->left);
            if(x->right!=NULL)
            q.push(x->right);
            q.pop();
        }
        reverse(v.begin(),v.end());
        for(int i:v)
        ans.push_back(i);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

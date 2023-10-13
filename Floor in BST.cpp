class Solution{

public:
    void solve(int &ans, Node *root, int x)
    {
        if(root==NULL)
        return;
        
        if(root->data<=x)
        ans=max(ans,root->data);
        
        solve(ans, root->left, x);
        solve(ans, root->right, x);
    }
    
    int floor(Node* root, int x) {
        // Code here
        int ans=-1;
        solve (ans, root, x);
        return ans;
    }
};

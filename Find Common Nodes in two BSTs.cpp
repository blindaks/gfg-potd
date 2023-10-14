class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    map<int,int>mp;
    
    void solve(Node *root)
    {
        if(root==NULL)
        return;
        
        mp[root->data]++;
        solve(root->left);
        solve(root->right);
    }
    
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     solve(root1);
     solve(root2);
     vector<int>v;
     for(auto it:mp)
     {
         if(it.second>1)
         v.push_back(it.first);
     }
     return v;
    }
};

/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void solve(Node* root, vector<vector<int>>& vec, vector<int>v)
    {
        // if(root==NULL)
        // {
        //     vec.push_back(v);
        //     return;
        // }
        v.push_back(root->data);
        if(root->left==NULL && root->right==NULL)
        {
            vec.push_back(v);
        }
        if(root->left!=NULL)
        solve(root->left, vec, v);
        if(root->right!=NULL)
        solve(root->right, vec, v);
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        if(root==NULL)
        return {{}};
        vector<vector<int>>vec;
        vector<int>v;
        solve(root, vec, v);
        return vec;
    }
};

/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    public:
  void inorder(vector<int>& v, Node* root)
  {
      if(root==NULL)
      return;
      inorder(v, root->left);
      v.push_back(root->data);
      inorder(v, root->right);
  }
    //Function to convert binary tree into circular doubly linked list.
    Node *bTreeToCList(Node *root)
    {
    //add code here.
    vector<int>v;
    inorder(v, root);
    if(v.empty())
    return NULL;
    Node* r=new Node();
    r->data=v[0];
    Node* x=r;
    for(int i=1;i<v.size();i++)
    {
        Node* t=new Node();
        t->data=v[i];
        x->right=t;
        t->left=x;
        x=t;
    }
    x->right=r;
    r->left=x;
    return r;
    }
};

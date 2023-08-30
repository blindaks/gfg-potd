/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    Node* prev=NULL;
    Node* curr=head;
    x=x-1;
    if(x==0) return head->next;
    while(curr && x)    {
       
        prev=curr;
        curr=curr->next;
        x--;
    }   
    prev->next=curr->next;
    delete curr;
    return head;
    //Your code here
}

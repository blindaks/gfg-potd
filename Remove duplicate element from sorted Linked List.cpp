/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    Node *curr=head;
     Node*temp=head;
     while(curr->next!=NULL){
        if(curr->data !=curr->next->data){
            temp->next=curr->next;
            temp=curr->next;
        } 
        
        curr=curr->next;
     }
     temp->next=NULL;
     return head;
 // your code goes here
}

/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(!head || !head->next)
        {
            return head;
        }
        Node * temp= head->next;
        head->next = pairWiseSwap(head->next->next);
        temp->next = head;
        return temp;
    }
};

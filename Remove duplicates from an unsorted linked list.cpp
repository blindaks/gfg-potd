/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      Node* curr = head;
      Node* prev = NULL;
      Node* temp = head;

      unordered_map<int,bool> m;
       while(temp!=NULL)
      {
          m[temp->data] = false;
          temp = temp->next;
      }
      m[curr->data] = true;
      prev = curr;
      curr = curr->next;
      while(curr!=NULL)
      {
          if(m[curr->data]==false)
          {
              m[curr->data] = true;
              prev->next = curr;
              prev =  curr;
              curr = curr->next;
          }
          else
          {
              temp = curr;
              curr = curr->next;
              temp->next = NULL;
          }
      }
      prev->next = NULL;
      return head;
     // your code goes here
    }
};

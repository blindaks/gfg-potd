Node* temp=head;
        if(head->data>data)
        {
            Node* node=new Node(data);
            node->next=head;
            head=node;
            return head;
        }
        Node* x=head;
        while(temp->next!=NULL && temp->next->data<data)
        {
            temp=temp->next;
        }
        if(temp->next==NULL)
        {
            Node* node=new Node(data);
            temp->next=node;
            return head;
        }
        Node* cur=temp->next;
        Node* node=new Node(data);
        node->next=cur;
        temp->next=node;
        return head;

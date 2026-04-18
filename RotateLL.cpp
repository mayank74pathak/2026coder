 ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL or k==0)
        return head;
        int n=0;
       ListNode*t=head;
       while(t)
       {
           t=t->next;
           n++;  
       }
k=k%n;
        while(k--)
        {
           ListNode*temp=head;
            while(temp->next->next)
            {
                temp=temp->next;
            }
        ListNode*lastNode=temp->next;
        lastNode->next=head;
        head=lastNode;
        temp->next=NULL;
        
       
        }
return head;
    }
};

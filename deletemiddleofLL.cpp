ListNode* deleteMiddle(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*temp=head;
        if(head==NULL or head->next==NULL )
        return NULL;
        while(fast!=NULL and  fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
             
        }
    temp->next=slow->next;
    slow->next=NULL;
    return head;
    }

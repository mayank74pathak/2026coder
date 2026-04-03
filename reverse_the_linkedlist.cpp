ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*front=head;
        while(front)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            if(front!=NULL)
            curr=front;
        }
    return curr;
    }

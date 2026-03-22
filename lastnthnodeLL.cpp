ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*count=head;
        int c=0;
        while(count!=NULL)
        {
            c++;
            count=count->next;
        }
     
    ListNode*del=head;
      
     if(n==c)
     return head->next;
     if(n==1)
     {
        while(del->next->next!=NULL)
        {
            del=del->next;

        }
     del->next=NULL;
     return head;
     }
     int k=c-n;
     int i=1;
     while(i<k)
     {
        del=del->next;
        i++;
     }
  del->next=del->next->next;  
    return head;
    }

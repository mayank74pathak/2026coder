bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)
        return true;
        
         ListNode*slow=head;
         ListNode*fast=head;
         while(fast and fast->next )
         {
            slow=slow->next;
            fast=fast->next->next;
         }
           
        ListNode*prev=NULL;
        while(slow){
            ListNode*next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }  
  ListNode*first=head;
  ListNode *second=prev;

  while(second)
  {
    if(first->val !=second->val)
    return false;
    first=first->next;
    second=second->next;
  }
return true;

    }

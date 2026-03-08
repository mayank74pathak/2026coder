class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL or head->next==NULL)
        return NULL;
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*front=head->next;
        while(front!=NULL)
        {
         curr->next=prev;
         prev=curr;
         curr=front;
         front=front->next;
         
        } 
        curr->next=prev;
return curr;
    }
};

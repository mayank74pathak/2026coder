ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA=0;
        int countB=0;
        ListNode*tempA=headA;
        ListNode*tempB=headB;
        while(tempA)
        {
            countA++;
        tempA=tempA->next;
        }

        while(tempB)
        {
            countB++;
            tempB =tempB->next;
        }
       int diff=abs(countA-countB);
       if(countA>countB)
       {
        while(diff--)
        {
            headA=headA->next;
        }
       }
       else
       {
        while(diff--)
        {
            headB=headB->next;
        }
       }
        while(headA and headB)
        {
            if(headA==headB)
            return headA;
            

         headA=headA->next;
         headB=headB->next;

        } 
    return NULL;
    }

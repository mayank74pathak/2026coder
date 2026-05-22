 ListNode *detectCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect cycle
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            // Cycle found
            if(slow == fast)
            {
                // Step 2: Find cycle start
                ListNode* temp = head;

                while(temp != slow)
                {
                    temp = temp->next;
                    slow = slow->next;
                }

                return temp;
            }
        }

        // No cycle
        return NULL;
    }

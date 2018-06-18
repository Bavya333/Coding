bool hasCycle(ListNode *head) {
        ListNode * mhead=head;
        if(head!=NULL)
        {
           // if(head->next==NULL)
               // head->next=head;
            while(mhead!=NULL)
            {
                if(mhead->val!=0)
                {
                    mhead->val=0;
                }
                else
                    return true;
                mhead=mhead->next;
            }
            return false;
        }
        else
        return false;
    }

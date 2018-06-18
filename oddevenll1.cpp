 ListNode* oddEvenList(ListNode* head) 
    {
        if(head!=NULL){
        int count=0;
        ListNode * mhead=head;
        ListNode * last=head->next;
        ListNode * r=head->next;
        
        while(mhead->next!=NULL && mhead->next->next!=NULL)
        {
            count++;
            mhead->next=r->next;
            mhead=r;
            if(r!=NULL)
                r=r->next;
        }
        count++;
        if(count%2==0)
        {
           if(r!=NULL)
                r->next=last;
            mhead->next=NULL;
        }
        else
        {
            mhead->next=last;
            if(r!=NULL)
                r->next=NULL;
        }
        }
        return head;
    }

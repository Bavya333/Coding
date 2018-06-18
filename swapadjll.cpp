 ListNode* swapPairs(ListNode* head) 
    {
     if(head!=NULL)
     {
        ListNode *m=head;
        ListNode *one;
        ListNode *two;
        if(head->next!=NULL)
        {
                m=head->next;
                one=head->next;
                two=head->next->next;
        }
        while(head->next!=NULL && head->next->next!=NULL)
        {
                one->next=head;
                if(two->next!=NULL)
                        head->next=two->next;
                else
                        head->next=two;
                head=two;
                if(head->next!=NULL)
                {
                        one=head->next;
                        two=head->next->next;
                }

        }
        if(head->next==NULL)
            return m;
         else
         {
             if(head->next->next==NULL)
             {
                 one->next=head;
                 head->next=NULL;
                 return m;
             }
         }
     }
        else
            return head;
    }

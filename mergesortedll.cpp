Node * head,* mhead;
                if(headA->data==headB->data)
                {
                                head=headA;
                                mhead=head;
                                mhead->next=headB;
                                mhead=mhead->next;
                                headA=headA->next;
                                headB=headB->next;
                }
                else if(headA->data<headB->data)
                {
                                head=headA;
                                mhead=head;
                                mhead=mhead->next;
                                headA=headA->next;
                }
                else
                {
                                head=headB;
                                mhead=head;
                                mhead=mhead->next;
                                headB=headB->next;
                }
        while(headA!=NULL || headB!=NULL)
        {
                if(headA!=NULL && headB!=NULL)
                {
                        if(headA->data==headB->data)
                        {
                                mhead->next=headA;
                                mhead->next->next=headB;
                                mhead=mhead->next->next;
                                headA=headA->next;
                                headB=headB->next;
                        }
                        else if(headA->data<headB->data)
                        {
                                mhead->next=headA;
                                mhead=mhead->next;
                                headA=headA->next;
                        }
                        else
                        {
                                mhead->next=headB;
                                mhead=mhead->next;
                                headB=headB->next;
                        }
                }
                else
                {
                        if(headA==NULL)
                        {
                                mhead->next=headB;
                                mhead->next->next=NULL;
                        }
                        else
                        {
                                mhead->next=headA;
                                mhead->next->next=NULL;
                        }
                }
        }
        return head;

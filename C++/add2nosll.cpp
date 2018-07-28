if(l1!=NULL && l2!=NULL)
            {
                set <ListNode *> s1;
                set <ListNode *> s2;
                while(l1!=NULL || l2!=NULL)
                {
                    if(l1!=NULL)
                    {
                        s1.insert(l1);
                        l1=l1->next;
                    }
                    if(headB!=NULL)
                    {
                        s2.insert(l2);
                        l2=l2->next;
                    }
                }
                set <int>::iterator it1,it2;
                it1=s1.end();
                it1--;
                it2=s2.end();
                it2--;
                ListNode * head,*temp;
                head->data=it1->val+it2->val;
                head->next=NULL;
                it1--;
                it2--;
                do
                {
                    temp->data=it1->val+it2->val;
                    temp->next=head;
                    head=temp;
                }
                do
                {
                    temp->data=it1->val;
                    temp->next=head;
                    head=temp;
                    return head;
                }while(it1!=l1.begin());
                do
                {
                    temp->data=it2->val;
                    temp->next=head;
                    head=temp;
                    return head;
                }while(it2!=l2.begin());
            }
        else
            return l1;

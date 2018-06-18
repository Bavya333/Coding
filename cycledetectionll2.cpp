//Hackerrank Submission
#include<set>
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
        Node * mhead=head;
        Node * t=head;
        set <Node*> s;
        if(head!=NULL)
        {
           // if(head->next==NULL)
               // head->next=head;
            while(mhead!=NULL)
            {
                if(s.find(mhead)!=s.end())
                {
                    return true;
                }
                else
                {
                    t=mhead;
                    s.insert(t);
                }
                mhead=mhead->next;
            }
            return false;
        }
        else
        return false;
    }


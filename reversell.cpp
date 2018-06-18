#include<iostream>
#include<stack>
using namespace std;
struct node
{
	int data;
	node * next;
};
ListNode* reverseList(ListNode* head) 
{
	ListNode *r;
	ListNode *t;
	ListNode *t1;
	if(head!=NULL)
	{
		t=head;
		r=head->next;
		head->next=NULL;
		while(r!=NULL)
		{
			t1=r->next;
			r->next=t;
			t=r;
			head=r;
			r=t1;
		}
		return head;
	}
	else
		return head;
}
int main()
{


}

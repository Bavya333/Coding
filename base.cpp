#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next,*pre;
};
template <class T>ss
class list
{
	public:
	 	struct node *f,*r;
		list()
		{
			f=r=NULL;
		}
		
	T push(T a)
	{
		if(f==NULL)
		{
			struct node *t=new node;
			t->pre=NULL;
			t->data=a;
			t->next='\0';
			f=r=t;
		}
		else
		{
			struct node *t=new node;
			r->next=t;
			t->pre=r;
			t->data=a;
			t->next='\0';
			r=t;		
		}
	}
};
class stack:public list
{
	public:
		void pop()
		{
			r=r->pre;	
		}
		void display()
		{
			cout<<"\nThe stack is:\n";
			struct node *t=new node;
			t=r;
			while(t!=NULL)
			{
				cout<<t->data<<"\n";
				t=t->pre;
			}			
		}
};
class queue:public list
{
	public:
		void dequeue()
		{
			f=f->next;
		}
		void display()
		{
			cout<<"\nThe queue is:\n";
			struct node *t=new node;
			t=f;
			while(t!=NULL)
			{
				cout<<t->data<<"\n";
				t=t->next;
			}
		}
};
int main()
{
	stack s;
	queue q;
	int choice,c,d;
	cout<<"\n1.Stack\n2.Queue\n0.exit\n";
	cin>>choice;
	while(choice)
	{	
		switch(choice)
		{
			case 1:cout<<"\n1.Push\n2.Pop\n3.Display\n0.Exit\n";
				cin>>c;
				while(c)
				{
					switch(c)
					{
						case 1:cout<<"\nEnter the no:";
							cin>>d;
							s.push<int>(d);
							break;
						case 2:s.pop();
							break;
						case 3:cout<<"\nThe stack is:\n";
							s.display();
							break;
						default:cout<<"\nInvalid choice\n";
					}
					cout<<"\n1.Push\n2.Pop\n3.Display\n0.Exit\n";
					cin>>c;
				}
			case 2:cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit\n";
				cin>>c;
				while(c)
				{
					switch(c)
					{
						case 1:cout<<"\nEnter the no:";
							cin>>d;
							q.push(d);
							break;
						case 2:q.dequeue();
							break;
						case 3:cout<<"\nThe stack is:\n";
							q.display();
							break;
						default:cout<<"\nInvalid choice\n";
					}
					cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit\n";
					cin>>c;
				}
			default:cout<<"\nInvalid choice";
		}
		cout<<"\n1.Stack\n2.Queue\n0.exit\n";
		cin>>choice;
	}
}


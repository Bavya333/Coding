#include<iostream>
#include<list>
#include<iterator>
using namespace std;
class stllist
{
	public:
		list <int> l;
		list <int>::iterator it;
		stllist()
		{
			for(it=l.begin();it!=l.end();it++)
				*it=0;
		}
};
class stack:public stllist
{
	public:
		void push(int a)
		{
			l.push_back(a);
		}
		void pop()
		{
			l.pop_back();
		}
		void display()
		{	it=l.end();
			for(--it;it!=l.begin();it--)
				cout<<"\n"<<*it;
			cout<<"\n"<<*it;
		}
		
};
class queue:public stllist
{
	public:
		void enqueue(int a)
		{
			l.push_back(a);
		}
		void dequeue()
		{
			l.pop_front();
		}
		void display()
		{
			for(it=l.begin();it!=l.end();it++)
				cout<<"\n"<<*it;
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
							s.push(d);
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
							q.enqueue(d);
							break;
						case 2:q.dequeue();
							break;
						case 3:cout<<"\nThe queue is:\n";
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
	return 0;
}

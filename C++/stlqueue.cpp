#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int c,d,l;
	queue <int> q;
	cout<<"\n1.Push\n2.Pop\n3.Display\n0.Exit\nChoice:";
	cin>>c;
	while(c)
	{
		switch(c)
		{
			case 1:cout<<"\nEnter no:";
				cin>>d;
				q.push(d);
				break;
			case 2:q.pop();
				break;
			case 3: 
				l=q.size();
				for(int i=0;i<l;i++)
				{
					cout<<q.front()<<endl;
					q.pop();
				}				
				break;
			default:
				cout<<"\nInvalid choice";
		}	
		cout<<"\nChoice:";
		cin>>c;
	}
}

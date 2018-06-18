#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int c,d;
	stack <int> s;
	int l;
	cout<<"\n1.Push\n2.Pop\n3.Display\n0.Exit\nChoice:";
	cin>>c;
	while(c)
	{
		switch(c)
		{
			case 1:cout<<"\nEnter no:";
				cin>>d;
				s.push(d);
				break;
			case 2:s.pop();
				break;
			case 3: 
				l=s.size();
				for(int i=0;i<l;i++)
				{
					cout<<s.top()<<endl;
					s.pop();
				}
				break;
			default:
				cout<<"\nInvalid choice";
		}	
		cout<<"\nChoice:";
		cin>>c;
	}
}

#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	int c,d,pos,i;
	list <int> l;
	list <int> ::iterator it;
	cout<<"\n1.Insert begin\n2.Insert end\n3.Delete begin\n4.Delete end\n5.Insert\n6.Delete\n7.Display\nChoice:";
	cin>>c;
	while(c)
	{
		switch(c)
		{
			case 1:cout<<"\nEnter no:";
				cin>>d;
				l.push_front(d);
				break;
			case 2:cout<<"\nEnter no:";
				cin>>d;
				l.push_back(d);
				break;
			case 3:
				l.pop_front();
				break;
			case 4:
				l.pop_back();
				break;
			case 5:
				cout<<"\nEnter position and element";
				cin>>pos>>d;
				for(it=l.begin(),i=0;i<pos;i++,it++)
				{}		
				l.insert(it,d);
				break;
			case 6:
				cout<<"\nEnter position";
				cin>>pos>>d;
				for(it=l.begin(),i=0;i<pos;i++,it++)
				{}		
				l.erase(it);
				break;
			case 7:
				for(it=l.begin();it!=l.end();it++)
					cout<<"\n"<<*it;
				break;
			default:
				cout<<"\nInvalid choice";
		
		
		}
		cout<<"\nChoice:";
		cin>>c;
	}
	
	
}

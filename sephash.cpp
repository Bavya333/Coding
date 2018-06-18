#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	int n,hx,search,i;
	list <int> :: iterator it;
	cout<<"\nEnter the table size:";
	cin>>n;
	list <int> l[10];
	int x,c;
	cout<<"\n1.Insert\n2.Search\n3.Delete\n4.Display\n0.Exit\nChoice:";
	cin>>c;
	while(c)
	{
		switch(c)
		{
			case 1:
				cout<<"\nElement to be inserted:";
				cin>>x;
				hx=x%n;
				l[hx].push_front(x);
				break;
			case 2:
				cout<<"\nEnter the no to be searched:";
				cin>>search;
				hx=search%n;
				for(i=1,it=l[hx].begin();it!=l[hx].end();it++,i++)
				{
					if(*it==search)
					{
						cout<<"\nThe element "<<search<<" is in the position "<<i<<"in the "<<hx+1<<"th list"<<"\n";
						break;
					}
				}
				break;
			case 3:
				cout<<"\nElement to be deleted:";
				cin>>search;
				hx=search%n;
				for(i=1,it=l[hx].begin();it!=l[hx].end();it++,i++)
				{
					if(*it==search)
					{
						l[hx].erase(it);
						break;
					}
				}
				break;
			case 4:
				for(i=0;i<n;i++)
				{
					for(it=l[i].begin();it!=l[i].end();it++)
						cout<<*it<<" ";
					cout<<"\n";
				}
				break;
			default:
				cout<<"\nInvalid choice";
		}
		cout<<"\nChoice:";
		cin>>c;
	}
	return 0;
}

#include<iostream>
using namespace std;
int rec(int a[],int hx,int i,int n,int search,int r)
{
	int h2x=r-search%r;
	int f=i*h2x;
	h2x=(hx+f)%n;
	if(a[h2x]==0)
		a[h2x]=search;
	else 
	{	
		i++;
		rec(a,hx,i,n,search,r);
	}		
}
int main()
{
	int n,search,hx,c,r;
	cout<<"\nEnter r value:";
	cin>>r;
	cout<<"Enter the table size:";
	cin>>n;
	int a[n]={0,};
	cout<<"\n1.Insert\n2.Search\n3.Delete\n4.Display\n0.Exit\nChoice:";
	cin>>c;
	while(c)
	{
		switch(c)
		{
			case 1:
				cout<<"\nElement to be inserted:";
				cin>>search;
				hx=search%n;
				rec(a,hx,0,n,search,r);
				break;
			case 2:
				cout<<"\nElement to be searched:";
				cin>>search;
				for(int i=0;i<n;i++)
				{
					if(a[i]==search)
						cout<<"\nThe element "<<search<<" is in the position "<<i+1;
				}
				break;
			case 3:
				cout<<"\nElement to be deleted:";
				cin>>search;
				for(int i=0;i<n;i++)
				{
					if(a[i]==search)
						a[i]=0;
				}
				break;
			case 4:
				for(int i=0;i<n;i++)
				{
					if(a[i]==0)
						cout<<"\n";
					else
						cout<<"\n"<<a[i];
				}
				break;
			default:
				cout<<"Invalid choice";	
		}
		cout<<"\nChoice:";
		cin>>c;
	}
	return 0;
}



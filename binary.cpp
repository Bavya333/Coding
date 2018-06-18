#include<iostream>
#include<cmath>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	int i,n,t,sum=0;
	cin>>t;
	list <int> l;
	list <int>::iterator it;
	while(t--)
	{
		cin>>n;
		while(n)
		{
			l.push_front(n%2);
			n=n/2;
		}
		for(i=0,it=--l.end();it!=--l.begin();it--,i++)
		{
			*it=!(*it);
			*it*=pow(2,i);
			sum+=*it;
		}
		cout<<sum;
	}
}

#include <iostream>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	cin>>n;
	int *a=new int(n);
	for(i=0;i<n;i++)
	cin>>a[i];
	i=0;
	while(i<n)
	{
	    if(a[i]==a[i+1])
	    a[i]*=2;
	    a[i+1]=0;
	    i++;
	}
	for(int i=0;i<n;i++)
	cout<<a[i];
	return 0;
}

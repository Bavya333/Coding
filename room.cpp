#include<iostream>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	int *a=new int[n*n];
	int *d=new int[n*n];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			a[k]=i+j;
	}
	for(int i=0;i<n*n;i++)
		cout<<a[i];
}

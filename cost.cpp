#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		n=0;
		cin>>n;
		char *B=new char(n);
		cin>>B[0];
		for(int i=1;i<n;i++)
		{
			cin>>B[i];
			if(abs(B[i]-B[i-1]) < abs(B[i-1]-1))
				B[i]=1;
			sum+=abs(B[i-1]-B[i]);
		}
	}
	cout<<sum;
}

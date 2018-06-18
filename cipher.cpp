#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string A,s,x;
	cin>>A;
	reverse(A.begin(),A.end());
	int i;
	x[0]=A[0];
	cout<<x[0];
	s[0]=A[0];
	for(i=1;i<n-k;i++)
	{
		if(A[i]==x[i-1])
			x[i]='0';
		else
			x[i]='1';
	}
	for(i=1;i<k;i++)
	{
		if(A[i]-'0')
			s[i]=!(A[i-1]-'0');
		else
			s[i]=A[i-1];
		cout<<char(s[i]);
	}
	for(i=k;i<n;i++)
	{
		if(A[i]-'0')
			s[i]=!(A[i-1]-'0')^(x[i-k]-'0');
		else
			s[i]=(A[i-1]-'0')^(x[i-k]-'0');
	}
	reverse(s.begin(),s.end());
	//cout<<"\n"<<s;
}

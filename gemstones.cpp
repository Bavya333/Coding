#include<iostream>
using namespace std;
int main()
{
	int N,a[26]={0,};
	string s;
	cin>>N;
	int j=0;
	while(j<N)
	{
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			int n=0;
			n=s[i]-97;
			a[n]++;	
		}
		j++;	
	}
	j=0;
	for(int i=0;i<26;i++)
	{
		if(a[i]==N)
			j++;
		cout<<"\n"<<j;
	}
}

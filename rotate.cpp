#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	char c;
	string s;
	cin>>s;
	int n=s.length();
	vector <char> v[n];
	for(int i=0;i<n;i++)
	{
		v[0].push_back(s[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		v[i+1]=v[i];
		rotate(v[i+1].begin(),v[i+1].begin()+1,v[i+1].end());
	}
	for(int i=0,j=1;j<n;j++)
	{
		if(v[j]>v[i])
			v[i]=v[j];	
	}
	for(int i=0;i<n;i++)
		cout<<v[0][i];
	cout<<"\n";
	}
}

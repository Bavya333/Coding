#include<iostream>
#include<set>
#include<iterator>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<string> se;
		set<string>::iterator it;
		string s,s1;
		int count=0,i,j;
		for(i=0;i<n;i++)
		{
			cin>>s;
			se.insert(s);
		}
		s.clear();
		cin>>s;
		i=1;
		for(j=i-1;i<s.length();j=i+1,i=1)
		{
			for(;i<s.length();i++)
			{
				if(se.find(s.substr(j,i))!=se.end())	
				{
					string s1(s.substr(j,i));
					count=;
					cout<<count;
					break;
				}	
			}
		}
		if(count+1==n)
			cout<<s1;
		else
			cout<<"INVALID COUPON\n";
	}
}

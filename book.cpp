#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	list<string> l;
	list<string>::iterator it;
	int i,n,cnt=0;
	cin>>n;
	string add("add");
	string s1,s2;
	for(i=0;i<n;i++)
	{
		cin>>s1>>s2;
		if(s1.compare("add")==0)
		{
			l.push_back(s2);
			s1.clear();
			s2.clear();
		}
		else
			break;
	}
	for(;i<n;i++)
	{
		cnt=0;	
		for(it=l.begin();it!=l.end();it++)
		{	
			string s(*it);
			if(s2.compare(s.substr(0,s2.length()))==0)
			{
				cnt++;
			}
		}
		cout<<"\n"<<cnt;
		s1.clear();
		s2.clear();
		cin>>s1>>s2;
	}
}

#include<iostream>
#include<list>
#include<string>
using namespace std;
char lower(char c)
{
	if(c!=32 && (c>='A' && c<='Z'))
		c+=32;
	return c;
}
int main()
{
	int as,flag=1;
	list <char> l[26];
	string s1;
	getline(cin,s1);
	char *s2=new char[s1.length()];
	for(int i=0;i<s1.length();i++)
		s2[i]=lower(s1[i]);;	
	for(int i=0;i<s1.length();i++)
	{
		if(s2[i]!=32)
		{
			as=int(s2[i]);
			as-=97;
			l[as].push_back(s2[i]);
		}
	}
	for(int i=0;i<26;i++)
	{
		if(l[i].empty())
		{
			flag=0;
			break;
		}
	}
	if(flag)
		cout<<"Pangram";
	else
		cout<<"Not a Pangram";
}

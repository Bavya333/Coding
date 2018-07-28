#include<iostream>
#include<string>
using namespace std;
string deletion(string s)
{
	int i=0;
	for(;i<s.length();i++)
	{
		if(s[i]==s[i+1])
		{
			s.erase(s[i]);
			s.erase(s[i+1]);
			break;
		}
	}
	if(i==s.length()-2)
	{
		return s;
	}
	else
		s=deletion(s);
}
int main()
{
	string s;
	cin>>s;
	s=deletion(s);
	cout<<s;
	return 0;
}

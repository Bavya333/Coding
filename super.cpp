#include<iostream>
#include<string>
using namespace std;
string super(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(i+1==s.length())
			return s;
		else
		{
			if(s[i]==s[i+1])
			{
				s.erase(s.begin()+i,s.begin()+i+2);
				s=super(s);
				break;
			}
		}
	}
	return s;
}
int main()
{
	string s;
	cin>>s;
	s=super(s);
	if(s.length()>0)
		cout<<s;
	else
		cout<<"Empty String";
}

#include<iostream>
#include<string>
using namespace std;
string deletion(string s,int flag)
{
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			s.erase(s.begin()+i);
			s.erase(s.begin()+i+1);
			flag=1;
			break;
			cout<<"**if**";
		}
	}
	if(flag==1)
	{
		s=deletion(s,0);
	}
		return s;
}
int main()
{
	string s;
	cin>>s;
	s=deletion(s,0);
	cout<<s;
	return 0;
}

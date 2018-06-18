#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1("hackerrank");
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int flag=0;
		for(int i=0,j=0;j<s.length();j++)
		{
			if(s1[i]==s[j])
			{
				flag++;
				i++;
			}
		}
		if(flag==10)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}

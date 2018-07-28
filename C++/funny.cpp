#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag=1,l=s.length()-1;
	for(int i=1;i<=l;i++)
	{
		if(abs(s[i]-s[i-1]) != abs(s[l-i]-s[l-i+1]))
		{
			flag=0;
			break;
		}
	}
	if(flag)
		cout<<"Funny";
	else
		cout<<"Not Funny";
}

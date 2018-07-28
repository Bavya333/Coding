#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	locale loc;
	getline(cin,s);
	for(int i=1;i<s.length();i++)
	{
		if(s[i-1]!='.')
		{
			if(s[i] <= 'Z' && s[i] >= 'A')
    				s[i]= s[i] - ('Z' - 'z');
		}
	}
	cout<<s;
}

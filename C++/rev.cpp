#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
	string s,c;
	getline(cin,c);
	stringstream ss(c);
	while(ss>>s)
	{
		reverse(s.begin(),s.end());
		cout<<s<<" ";
	}
}

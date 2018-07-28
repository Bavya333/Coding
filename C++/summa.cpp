#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	int a=54678;
	char c;
	string s(string(a));
	stringstream ss(s);
	for(int i=0;i<5;i++)
	{
		ss>>c;
		cout<<c;
	}
}


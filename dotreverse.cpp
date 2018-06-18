#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <string> st;
	string v;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='.')
		{
			v+=s[i];
		}
		else
		{
			st.push(v);
			v.clear();
		}
	}
	while(!st.empty())
	{
		cout<<st.top();
		cout<<".";
		st.pop();
	}
}

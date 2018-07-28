#include<iostream>
#include<set>
using namespace std;
int main()
{
	int i,length,l=1,d=1,u=1,spl=1,len;
	cin>>length;
	string s;
	cin>>s;
	set <char> st;
	st.insert('!');
	st.insert('@');
	st.insert('#');
	st.insert('$');
	st.insert('%');
	st.insert('^');
	st.insert('&');
	st.insert('*');
	st.insert('(');
	st.insert(')');
	st.insert('-');
	st.insert('+');
	for(i=0;i<s.length();i++)
	{
		if(isdigit(s[i]))
			d=0;
		if(isupper(s[i]))
			u=0;
		if(islower(s[i]))
			l=0;
		if(st.find(s[i])!=st.end())
			spl=0;
	}
	l+=u+d+spl;
	if(s.length()<6)
	{
		len=6-s.length();
		if(len>l)
			cout<<len;
		else
			cout<<l;
	}
	else
		cout<<l;
}

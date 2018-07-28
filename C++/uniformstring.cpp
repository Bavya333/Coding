#include<iostream>
#include<map>
#include<set>
#include<iterator>
using namespace std;
int main()
{	string s;
	cin>>s;
	int t,temp,i,j;
	map <char,int> g;
	map <char,int> ::iterator it;
	for(int i=0;i<s.length();i++)
	{
		if(g.find(s[i])==g.end())
		{
			temp=1;
			g.insert(pair <char,int> (s[i],1));
		}
		else if(s[i]==s[i-1])
		{
			temp++;
			it=g.find(s[i]);
		        it->second=max(temp,it->second);
		}
		else
		{
			temp=1;
		}
	}
	set <int,greater<int> > st;
	for(it=g.begin();it!=g.end();it++)
	{
		for(j=1;j<=it->second;j++)
			st.insert((it->first-96)*j);
	}
	cin>>t;
	while(t--)
	{
		cin>>temp;
		if(st.find(temp)!=st.end())
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}



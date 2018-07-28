#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<cstring>
#include<string>
using namespace std;
struct node
{
	vector <char> v;
};
int main()
{
	node n;
	list <node> l;
	list <node> ::iterator it1,it2;
	vector <char> :: iterator I;
	string s;
	cin>>s;
	int N=s.length();
	for(int i=0;i<N;i++)
		n.v.push_back(s[i]);
	l.push_back(n);
	for(it1=l.begin();it1!=l.end();it1++)
	{
		node m;
		m.v=it1->v;
		
		l.push_back(m);
	}
}

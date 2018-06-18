#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	list <char> l;
	list <char> :: iterator it;
	for(int i=0;i<26;i++)
		l.push_back('a'+i);
	it=l.begin();
	--l.end()=it;int i;
	for(it=l.begin(),i=0;i<100;it++,i++)
		cout<<*it;
}

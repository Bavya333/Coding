#include<iostream>
#include<list>
#include<iterator>
#include<string>
using namespace std;
int main()
{
	list<string> l;
	list<string>::iterator it;
	int i,n,count=0;
	cin>>n;
	string s1("bavs"),s2("bavs");
	l.push_front(s1);
	l.push_front(s2);
	it=l.begin();
	//it1=l.begin()+1;
	string s(*it);
	cout<<s;
}

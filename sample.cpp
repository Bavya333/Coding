#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
	set <int> s;
	set <int>::iterator it;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	it=s.end();
	int a;
	do
	{
		it--;
		a=*it;
		cout<<a<<" ";
	}while(it!=s.begin());
}

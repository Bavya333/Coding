#include<iostream>
#include<cstring>
using namespace std;
//template<class T>
class hyper
{
public:
	int id,price,qty;
	char name[20];
	void getid(int a)
	{
		id=a;
	}
	void getname(char c[])
	{
		strcpy(name,c);
	}
	
};
template<class T>
void display(T a)
{	
	cout<<"\n"<<a;
}
int main()
{
	int a,b,c;
	char name[20];
	hyper s;
	cout<<"\nEnter id,name,price,qty:";
	cin>>a>>name;
	s.getid(a);
	s.getname(name);
	display(s.id);
	display(s.name);
	return 0;
}

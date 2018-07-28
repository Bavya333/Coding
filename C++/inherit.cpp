#include<iostream>
using namespace std;
class B
{
	int pri;
	protected:
		int pro;
	public:
		
		int pub;
		int total;
		B()
		{
			
			pub=pri=pro=total=0;
		}
		int show_pri();
		int show_pub();
		int show_pro();
		void sum(int,int,int);
		void show_sum();
};
int B::show_pri()
{	
	pri=1;
	cout<<pri;
	return pri;
}
int B::show_pub()
{
	pub=3;
	cout<<pub;
	return pub;
}
int B::show_pro()
{
	pro=555;
	cout<<pro;
	return pro;
}
void B::sum(int p,int q,int r)
{
	total=p+q+r;
}
void B::show_sum()
{
	cout<<"\nSum:"<<total;
}
class Dpri:private B
{
	public:	
	Dpri()
	{
		cout<<"\nPrivate data member of base class:";
	}
	int display()
	{
		int p=show_pri();
		return p;
	}
};
class Dpub:public B
{
	public:	
	Dpub()
	{
		cout<<"\nPublic data member of base class:";	
	}
};
class Dpro:protected B
{
	public:	
	Dpro()
	{
		cout<<"\nProtected data member of base class:";	
	}
	int show()
	{
		show_pro();
	}
};
int main()
{
	int p,q,r;
	B bb;
	Dpri a;
	p=a.display();
	Dpub b;
	q=b.show_pub();
	Dpro c;
	r=c.show();
	b.sum(p,q,r);
	b.show_sum();
	return 0;
}


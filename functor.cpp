#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
		};
		virtual int operator()(int a,int b)=0;
};
class add:public base
{
	public:
		add(){};
		virtual int operator()(int a,int b)
		{
			return a+b;
		}
};
class sub:public base
{
	public: 
		sub(){};
		virtual int operator()(int a,int b)
		{
			return a-b;
		}
};
int fn(int a,int b,base * obj)
{
	return (*obj)(a,b);
}
int main()
{
	int a=5,b=10;
	base *plus=new add();
	base *minus=new sub();
	cout<<"\nAddition:"<<fn(a,b,plus);
	cout<<"\nSubtraction:"<<fn(a,b,minus);
	delete plus;
	delete minus;
}


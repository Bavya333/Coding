#include<iostream>
using namespace std;
class base
{
	protected:
		int a;
	public:
		int b;
		int ass(int a)
		{
			this->a=a;
		}
		
};
class der:public base
{
	int pri;
	public:
		int pub;
		void print()
		{
			cout<<a;
		}
};
int main()
{
	der d;
	d.ass(5);
	d.print();
}

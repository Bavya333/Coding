#include<iostream>
using namespace std;
struct item
{
	int id,qty,price;
	char name[20];
};
template<class T>
class supermarket
{
	public:
		struct item s[3];
		virtual int get_id()
		{
			int d;
			cout<<"\nEnter ID:";
			cin>>d;
			return d;
		}
		virtual void display(T a)
		{
			cout<<a<<"\n";
		}
		virtual void create()
		{
			for(int i=0;i<3;i++)
			{
				cin>>s[i].id>>s[i].name>>s[i].price>>s[i].qty;
			}
		}		
};
template<class T>
class billing:public supermarket
{
	public:
		int amount;
		void bill(int d)
		{
			for(int i=0;i<3;i++)
			{
				if(d==s[i].id)
				{
					s[i].qty--;
					cout<<"\nItem:"<<display(s[i].name);
					cout<<"\nPrice:"<<display(s[i].price);
					amount+=s[i].price;					
				}
			}
			cout<<"\nTotal:"<<display(amount);
		}
};
template<class T>
class stock:public supermarket
{
	public:
		void stocking(int d)
		{
			for(int i=0;i<3;i++)
			{
				if(d==s[i].id)
				{
					int n;
					cout<<"\nEnter qty:";
					cin>>n;
					s[i].qty+=n;
					cout<<"\nDatabase updated!";
				}
			}			
		}	
};
template<class T>
class derived:public billing,public stock
{
	public:
		derived(){}
};
int main()
{
	derived <int> b;
	cout<<"\nCreating database:\n";
	cout<<"\nEnter item id,name,price,qty:\n";
	b.create();
	b.bill(3);
}

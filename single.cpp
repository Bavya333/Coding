#include<iostream>
using namespace std;
struct node
{
	int coeff;
	int exp;
	node * next;
};
class poly
{
	struct node *r,*head;
	public:
		poly()
		{
			r=head=NULL;
		}
		void append(int,int);
		void add(poly,poly);
		poly operator -(poly);
		poly multi(poly,poly);
		poly scaling(poly,int);
		void display();
};

void poly::append(int c,int e)
{
	if(head==NULL)
	{	
		struct node *t=new node;
		t->coeff=c;
		t->exp=e;
		t->next='\0';
		head=r=t;
	}
	else
	{
		struct node *t=new node;
		r->next=t;
		t->coeff=c;
		t->exp=e;
		t->next='\0';
		r=t;
	}
}
poly poly::operator -(poly p2)
{
	poly p;
	r=head;
	p2.r=p2.head;
	while(r!='\0' || p2.r!='\0')
	{
		int c,e;
		if(r->exp>p2.r->exp)
		{
			c=r->coeff;
			e=r->exp;
			p.append(c,e);
			r=r->next;				
	}
		else if(p2.r->exp>r->exp) 
		{
			c=-(p2.r->coeff);
			e=p2.r->exp;
			p.append(c,e);
			p2.r=p2.r->next;				
		}
		else
		{
			c=r->coeff-p2.r->coeff;
			e=r->exp;
			p.append(c,e);
			r=r->next;
			p2.r=p2.r->next;
		}
	}
	return p;
}
void poly::add(poly p1,poly p2)
{
	p1.r=p1.head;
	p2.r=p2.head;
	while(p1.r!='\0' || p2.r!='\0')
	{
		int c,e;
		if(p1.r->exp>p2.r->exp)
		{
			c=p1.r->coeff;
			e=p1.r->exp;
			append(c,e);
			p1.r=p1.r->next;				
		}
		else if(p2.r->exp>p1.r->exp) 
		{
			c=p2.r->coeff;
			e=p2.r->exp;
			append(c,e);
			p2.r=p2.r->next;				
		}
		else
		{
			c=p1.r->coeff+p2.r->coeff;
			e=p1.r->exp;
			append(c,e);
			p1.r=p1.r->next;
			p2.r=p2.r->next;
		}
	}
}
poly poly::multi(poly p1,poly p2)
{
	int c,e;
	poly p,v;
	p1.r=p1.head;
	while(p1.r!='\0')
	{
		p2.r=p2.head;
		while(p2.r!='\0')
		{
			c=p2.r->coeff*p1.r->coeff;
			e=p2.r->exp+p1.r->exp;			
			p.append(c,e);
			p2.r=p2.r->next;
		}
		p1.r=p1.r->next;
	}
	p.r=p.head;
	while(p.r!=NULL)
	{
		
		v.r=p.r;
		while(v.r!=NULL)
		{
			if(p.r->exp==v.r->next->exp)
			{
				v.r->coeff=p.r->coeff+v.r->next->coeff;
				v.r->exp=p.r->exp;
			}
			v.r=v.r->next;
		}
		p.r=p.r->next;
	}
	return v;
}
void poly::display()
{
	struct node *t=new node;
	t=head;
	while(t!='\0')
	{	if(t->next=='\0')
		{
			cout<<t->coeff<<"x^"<<t->exp;
		        t=t->next;
		}
		else
		{
			cout<<t->coeff<<"x^"<<t->exp<<"+";
			t=t->next;
		}
	}
}
int main()
{
	poly p1,p2,p3,p4,p5;
	p1.append(2,1);
	p1.append(-4,0);
	p2.append(-6,0);
	p3.add(p1,p2);
	p1.display();
	cout<<"\n";
	p2.display();
	cout<<"\n";
	p3.display();
	p4=p1-p2;
     	cout<<"\n";
	p4.display();
	p5=p5.multi(p1,p2);
	cout<<"\n";
	p5.display();
	
	return 0;
}

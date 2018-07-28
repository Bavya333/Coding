#include<iostream>
using namespace std;
struct node
{
    string s;
    node *next;
};
int main()
{
    node *head,*m;
    char a;
    string s,a;
    head->next=NULL;
    int i=0;
    cin>>a;
    while(a[i]!='\n')
    {
        if(a[i]!='.')
        {
            s+=a[i];
        }	
        else
        {
           m->next=head;
           m->s=s;
           head=m;
           s.clear();
        }
	i++;
    }
    while(m!=NULL)
    {
        cout<<m->s<<".";
        m=m->next;
    }
}

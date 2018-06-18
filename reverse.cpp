int main()
{
        stack <node *> s;
        struct node * n=new node();
        struct node * t=new node();
        struct node * head=new node();
        n->data=1;
        n->next=NULL;
        head=n;
        s.push(n);
        t->data=2;
        t->next=NULL;
        n->next=t;
        n=n->next;
        s.push(n);
        t=s.top();
        cout<<t->data<<" "<<t->next<<"\n";
        s.pop();
        t=s.top();
        cout<<t->data<<" "<<t->next<<"\n";
        s.pop();
        cout<<t->next->data<<" "<<t->next->next<<"\n";
}
g

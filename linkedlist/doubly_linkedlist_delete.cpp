#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
node *h=0;
node *t=0;
void create()
{
    int choice=1;
    node *n;
    while(choice)
    {
        n=new node();
        cin>>n->data;
        n->prev=0;
        n->next=0;
        if(h==0)
            h=t=n;
        else
        {
            n->prev=t;
            t->next=n;
            t=n;
        }
         cout<<"enter choice";
         cin>>choice;
    }
}
void delbeg()
{
    h=h->next;
    delete h->prev;
    h->prev=0;
}
void delend()
{
    t=t->prev;
    delete t->next;
    t->next=0;
}
void delpos(int pos)
{
    node *temp=h;
    int count=1;
    while(count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}
main()
{
    create();
    for(node *i=h; i!=0; i=i->next)
        cout<<i->data;
    delbeg();
    delend();
    delpos(3);
    cout<<endl;
    for(node *i=h; i!=0; i=i->next)
        cout<<i->data;
    cout<<endl;
    for(node* i=t; i!=0; i=i->prev)
        cout<<i->data;
}

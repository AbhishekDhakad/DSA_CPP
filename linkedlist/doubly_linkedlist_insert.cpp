#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
node *h =0;
node *t=0;
void create()
{
    node *n;
    int choice=1;
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
            t->next=n;
            n->prev=t;
            t=n;
        }
        cout<<"enter choice";
        cin>>choice;
    }
}
void pushbeg(int num)
{
    node *n;
    n=new node;
    n->data=num;
    n->prev=0;
    if(h==0){
        n->next=0;
        h=n;
    }
    else{
    n->next=h;
    h->prev=n;
    h=n;
    }
}
void pushend(int num)
{
    node *n;
    n=new node;
    n->data=num;
    n->next=0;
    n->prev=0;
    if(h==0)
        h=t=n;
    else
    {
        t->next=n;
        n->prev=t;
        t=n;
    }

}
void pushat(int num, int pos)
{
    int count=1;
    node *n, *temp;
    n= new node();
    n->data=num;
    temp=h;
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    n->prev=temp;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
}
void pushafter(int num, int pos)
{
    int count=1;
    node *n, *temp;
    n=new node();
    n->data=num;
    temp=h;
    while(count!=pos)
    {
        temp=temp->next;
        count++;
    }
    n->prev=temp;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
}
main()
{
    create();
    pushbeg(5);
    pushend(6);
    pushat(6, 3);
    pushafter(8, 3);
    node* i;
    for(i=h; i!=0; i=i->next)
        cout<<i->data;
    cout<<endl;
     for(i=t; i!=0; i=i->prev)
        cout<<i->data;
}

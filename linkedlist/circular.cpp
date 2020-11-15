#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
}*h=0,*t=0;
void create()
{
    int choice=1;
    node *n;
    while(choice)
    {
        n= new node();
        cin>>n->data;
        if(h==0)
        {
            h=t=n;
            n->next=h;
        }
        else
        {
            t->next=n;
            n->next=h;
            t=n;
        }
        cout<<"Enter choice";
        cin>>choice;
    }
}
main()
{
    create();
    node* i;
    for(i=t; i->next!=t; i=i->next)
        cout<<i->data;
    cout<<i->data;
}

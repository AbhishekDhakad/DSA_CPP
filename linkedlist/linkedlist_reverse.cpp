#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void pushbeg(node **head, int num)
{
    node *n;
    n=new node();
    n->data=num;
    n->next=*head;
    *head=n;
}
node *reverse(node *head)
{
    node *p, *c, *n;
    p=NULL;
    c=n=head;
    while(n!=NULL)
    {
        n=n->next;
        c->next=p;
        p=c;
        c=n;
    }
    return p;
}
main()
{
    node *h=NULL;
    for(int i=1; i<6; i++)
        pushbeg(&h, i);
    h=reverse(h);
    for(node* i=h; i!=NULL; i=i->next)
        cout<<i->data ;
}

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
void length(node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    cout<<count<<endl;;
}
main()
{
    node *h=NULL;
    for(int i=1; i<6; i++)
        pushbeg(&h, i);
    length(h);
    for(node* i=h; i!=NULL; i=i->next)
        cout<<i->data ;
}


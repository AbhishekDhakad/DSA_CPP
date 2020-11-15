#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
};
node *h=0;
void create()
{
    node *n, *temp;
    int choice=1;
    while(choice)
    {
        n = new node();
        cin>>n->data;
        n->prev=0;
        n->next=0;
        if(h==0)
            h=temp=n;
        else
        {
            n->prev=temp;
            temp->next=n;
            temp=n;
        }
        cout<<"Enter choice";
        cin>>choice;
    }

}
int main()
{
    create();
    for(node *i=h; i!=0; i=i->next)
        cout<<i->data;
}

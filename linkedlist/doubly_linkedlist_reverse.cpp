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
void rev()
{
    node *temp,*temp2=h;
    while(temp2!=0)
    {
        h=temp2;
        temp =temp2->next;
        temp2->next=temp2->prev;
        temp2->prev=temp;
        temp2=temp;
    }
}
int main()
{
    create();
    for(node *i=h; i!=0; i=i->next)
        cout<<i->data;
    cout<<endl;
    rev();
    for(node *i=h; i!=0; i=i->next)
        cout<<i->data;

}

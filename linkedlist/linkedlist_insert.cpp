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
void pushat(node **head, int item, int d)
{
	if(*head==NULL)
	{
		return;
	}
	node *n,*t;
	n=new node();
	n->data=d;
	n->next=NULL;
	t=*head;
	cout<<t->data;
	while(t->data==item)
	{
		t=t->next;
		cout<<"h";
	}
	if(t==NULL)
	{
		n->next=*head;
		*head=n;
		cout<<"hlo";
		return;
	}
	cout<<"hoi";
	n->next=t->next;
	t->next=n;
	
}
void pushend(node **head, int num)
{
    node *n, *t;
    n=new node();
    n->data=num;
    n->next=NULL;
    if(*head==NULL)
    {
        *head=n;
        return;
    }
    t=*head;
    while(t->next!=0)
    {
        t=t->next;
    }
    t->next=n;
}
int main()
{
    node *h=NULL;
    for(int i=0; i<5; i++)
        pushbeg(&h, i);
        pushend(&h, 8);
        pushend(&h, 9);
        pushend(&h, 6);
        pushbeg(&h, 5);
       pushat(&h, 55, 8);
     for(node* i=h; i!=NULL; i=i->next)
        cout<<i->data<<endl ;
}


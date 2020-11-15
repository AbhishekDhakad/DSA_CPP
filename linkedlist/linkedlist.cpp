#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void pushat(node **head, int item, int d)
{
	if(*head==NULL)
	{
		return;
	}
	node *n,*t,*prev;
	n=new node();
	n->data=d;
	n->next=NULL;
	t=*head;
	while(t->data!=item && t->next!=NULL )
	{
		prev=t;
		t=t->next;
	}
	if(t->next==NULL || t->data==item)
	{
		n->next=*head;
		*head=n;
		return;
	}
	n->next=prev->next;
	prev->next=n;
}
main()
{
    int choice=1;
    node *h, *n, *t;
    h=0;
    while(choice)
    {
        n = new node();
        cin>>n->data;
        if(h==0){
            h=n;
            t=n;
            }
        else
        {
            t->next = n;
            t=n;
        }
        cout<<"Enter choice: ";
        cin>>choice;
    }
    pushat(&h, 5, 9);
    t=h;
    while(t!=0)
    {
        cout<< t->data;
        t=t->next;
    }
}

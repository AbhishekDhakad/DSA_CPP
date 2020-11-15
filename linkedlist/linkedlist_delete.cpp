#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void push(node **head, int num)
{
    node *n;
    n= new node();
    n->data=num;
    n->next=*head;
    *head = n;
}
void print(node *head)
{
    while(head!=0)
    {
        cout<<head->data;
        head=head->next;
    }
}
node *delb(node *head)
{
    node *temp;
    temp=head;
    head=head->next;
    delete temp;
    return head;
}
node *delend(node *head)
{
    node *temp;
    temp = head;
    if(temp->next==NULL)
    {
        delete head;
        return NULL;
    }
    while(temp->next->next!=0)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    delete temp->next;
    return head;
}
node *del(node *head, int num)
{
    int count=1;
    node *temp=head;
    while(count!=num-1)
    {
        temp=temp->next;
        count++;
    }
    node *k=temp->next;
    temp->next=temp->next->next;
    delete k;
    return head;
}
main()
{
    node *h=NULL;
    push(&h, 5);
    push(&h, 4);
    push(&h, 3);
    push(&h, 2);
    push(&h, 1);
    h=delb(h);
    push(&h, 1);
    h=delend(h);
    h=del(h, 3);
    push(&h, 6);
    print(h);
}

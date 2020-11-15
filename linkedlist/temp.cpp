#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
}*tail;
void pushbeg(Node **h, int x){
    Node *n,*t;
    n= new Node();
    n->data=x;
    n->prev=NULL;
    n->next=NULL;
    t=*h;
    if(*h==NULL){
        *h=n;
        tail=n;
        return;
    }
    t->prev=n;
    n->next=t;
    *h=n;
    return;
}
void pushend(Node **h, int x){
    Node *n,*t;
    n=new Node();
    n->data=x;
    n->prev=NULL;
    n->next=NULL;
    t=*h;
    if(*h==NULL){
        *h=tail=n;
        return;
    }
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=n;
    n->prev=t;
    tail=n;
    return;
}
void pushat(Node** h, int pos , int x){
    Node *n,*t;
    n=new Node();
    n->data=x;
    t=*h;
    if(*h==NULL){
        cout<<"Invalid choice";
    }
    int count=1;
    while(count<pos-1){
        t=t->next;
        count++;
    }
    n->prev=t;
    n->next=t->next;
    t->next->prev=n;
    t->next=n;
}
int main(){
    Node *h=NULL;
    for(int i=0; i<5; i++){
        pushbeg(&h, i);
    }
    pushbeg(&h , 8);
    pushbeg(&h , 7);
    pushend(&h,  5);
    pushbeg(&h , 7);
    pushat(&h,3,0);

    for(Node* i=h; i!=NULL; i=i->next){
        cout<<i->data<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
}*top=0;
void push(int x){
    Node *n = new Node();
    n->data=x;
    n->next=top;
    top=n;
}
void pop(){
    if(top==0){
        cout<<"UnderFlow"<<endl;
    }
    Node *t = top;
    top=top->next;
    cout<<"Popped :"<<t->data<<endl;
    delete t;
}
int main(){
    for(int i=1; i<6; i++){
        push(i);
    }
    pop();
    pop();
    for(Node *i=top; i!=0; i=i->next){
        cout<<i->data<<endl;
    }
}
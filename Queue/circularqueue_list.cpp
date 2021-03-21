#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*front=0,*rear=0;

void enqueue(int x){
    Node *n = new Node();
    n->data = x;
    n->next=0;
    if(front==0 && rear==0){
        front = rear = n;
        rear->next=front;
        return;
    }
    rear->next=n;
    rear=n;
    rear->next=front;
}

####

void dequeue(){
    if(front==0 && rear==0){
        cout<<"UnderFlow"<<endl;
        return;
    }
    if(front==rear){
        delete front;
    }
    Node* t = front;
    front = front->next;
    rear->next=front;
    cout<<"Deleted: "<<t->data<<endl;
    delete t;
}

void display(){
    if(front==0 && rear==0){
        cout<<"Empty"<<endl;
        return;
    }
    for(Node* i=front; i->next!=front; i=i->next){
        cout<<i->data<<endl;
    }
    cout<<rear->data<<endl;
}

int main(){
    dequeue();
    for(int i=2; i<12; i+=2){
        enqueue(i);
    }
    dequeue();
    enqueue(20);
    display();
}
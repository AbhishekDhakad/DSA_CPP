#include<iostream>
using namespace std;

int queue[5];
int front=-1;
int rear=-1;

void enqueue(int x){
    if(rear==4){
        cout<<"OverFlow"<<endl;
        return;
    }
    if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=x;
        return;
    }
    rear++;
    queue[rear]=x;
    return;
}
void dequeue(){
    if(rear==-1){
        cout<<"underflow"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<"Deleted: "<<queue[front]<<endl;
        front++;
    }
}
void display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }
    for(int i=front; i<=rear; i++){
        cout<<queue[i]<<endl;
    }
}
int main(){
    dequeue();
    for(int i=2; i<12; i=i+2){
        enqueue(i);
    }
    dequeue();
    enqueue(10);
    display();
    
}
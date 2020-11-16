#include<iostream>
using namespace std;
#define N 5
int deque[N];
int front = -1;
int rear = -1;

void enqueuefront(int x){
    if((front==0 && rear==N-1) || (front==rear+1)){
       cout<<"OverFlow"<<endl;
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        deque[front]=x;
    }
    else if(front==0){
        front=N-1;
        deque[front]=x;
    }
    else{
        front--;
        deque[front]=x;
    }
}

void enqueuerear(int x){
   if((front==0 && rear==N-1) || (front==rear+1)){
       cout<<"OverFlow"<<endl;
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        deque[rear]=x;
    }
    else if(rear==N-1){
        rear=0;
        deque[rear]=x;
    }
    else{
        rear++;
        deque[rear]=x;
    }
}

void dequeuefront(){
    if(front==-1 && rear==-1){
        cout<<"UnderFlow"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<"Deleted: "<<deque[front]<<endl;
        front=(front+1)%N;
    }
}

void dequeuerear(){
    if(front==-1 && rear==-1){
        cout<<"UnderFlow"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else if(rear==0){
        cout<<"Deleted: "<<deque[rear]<<endl;
        rear=N-1;
    }
    else{
        cout<<"Deleted: "<<deque[rear]<<endl;
        rear--;
    }
}

void display(){
    if(front==-1 && rear==-1){
        cout<<"Empty"<<endl;
    }
    for(int i=front; i!=rear; i=(i+1)%N){
        cout<<deque[i]<<endl;
    }
    cout<<deque[rear];
}

int main(){
    for(int i=2; i<12; i+=2){
        enqueuefront(i);
    }
    dequeuerear();
    dequeuerear();
    dequeuefront();
    dequeuefront();
    enqueuerear(20);
    display();
}
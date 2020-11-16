#include<iostream>
using namespace std;
#define N 5
int s1[N],s2[N];
int top1=-1; 
int top2=-1;
int count=0;

void push1(int x){
    if(top1==(N-1)){
        cout<<"OverFlow"<<endl;
    }
    top1++;
    s1[top1]=x;
}

void push2(int x){
    if(top2==(N-1)){
        cout<<"OverFlow"<<endl;
    }
    top2++;
    s2[top2]=x;
}

int pop1(){
    return s1[top1--];
}

int pop2(){
    return s2[top2--];
}

void enqueue(int x){
    push1(x);
    count++;
}

void dequeue(){
    if(top1==-1 && top2==-1){
        cout<<"UnderFlow"<<endl;
        return;
    }
    for(int i=0; i<count; i++){
        push2(pop1());
    }
    cout<<"Deleted: "<<pop2()<<endl;
    count--;
    for(int i=0; i<count; i++){
        push1(pop2());
    }
}

void display(){
    for (int i = 0; i <=top1; i++)
    {
        cout<<s1[i]<<endl;
    } 
}

int main(){
    for(int i=2; i<10; i+=2){
        enqueue(i);
    }
    enqueue(15);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
}
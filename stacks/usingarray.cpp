#include<iostream>
using namespace std;
int stack[5];
int top=-1;
void push(int x){
    if(top==4){
        cout<<"Overflow"<<endl;
        return;
    }
    top++;
    stack[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"UnderFlow"<<endl;
    }
    cout<<"Popped: "<<stack[top]<<endl;
    top--;
}
void peek(){
    cout<<"Top Element: "<<stack[top];
}
int main(){
    for(int i=1; i<6; i++){
        push(i);
    }
    pop();
    pop();
    for(int i=top; i!=-1; i--){
        cout<<stack[i];
    }
}
#include <iostream>
#include <stack>
using namespace std;
const int n = 10;
int arr[n];
int top = -1;
void push(int val){
    if(top==n-1){
        cout<<"stack is full"<<endl;
    }
    else{
        top++;
        arr[top]=val;
    }
}
void display(){
    if(top>=0){
        cout<<"stack element is:- "<<endl;
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}
void popelement(){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        cout<<"poped element from stack:- "<<arr[top]<<endl;
        top--;

    }
}
void topelement(){
    cout<<"top element is:- "<<arr[top]<<endl;
}
void isfullstack(){
    if(top==n-1){
        cout<<"stack is full"<<endl;
    }
    else{
        cout<<"need more stack element to full the stack"<<endl;
    }
}
void isemptystack(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
}
void mid(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        int mid=top/2;
        cout<<"mid element of stack is: "<<mid<<endl;
        top--;
    }
}
int main() {
    push(7);
    push(4);
    push(2);
    push(5);
    push(1);
    push(0);
    mid();
    display();
    return 0;
}

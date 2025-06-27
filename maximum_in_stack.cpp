#include <iostream>
#include <stack>
using namespace std;
int arr[10],n=10,top=-1;
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
void maximum(){
   if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    int maxval=arr[0];
    for (int i = 0; i <=top; i++){
        if(arr[i]>maxval){
            maxval=arr[i];
        }
    }
    cout<<"max value in stack is :- "<< maxval<<endl;
}
int main() {
    push(199);
    push(4);
    push(286);
    push(5);
    push(1);
    push(0);
    maximum();
    display();
    
    return 0;
}

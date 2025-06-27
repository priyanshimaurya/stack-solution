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
void largestelement(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    int lar=arr[0];
    for(int i=1;i<=top;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    cout<<"largest element in stack is:- "<<lar<<endl;
}
int main() {
    push(7);
    push(4);
    push(289);
    push(5);
    push(1);
    push(0);
   largestelement();
    display();
    
    return 0;
}

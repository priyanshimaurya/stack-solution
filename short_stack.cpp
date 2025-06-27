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
 void shortelement(){
    for(int i=0;i<=top;i++){
        for(int j=i+1;j<top;j++){
            int temp=0;
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        cout<<"After shorting array:- "<<arr[i]<<endl;
    }
 }

int main() {
    push(70);
    push(4);
    push(29);
    push(25);
    push(19);
    push(100);
    shortelement();
    display();
    
    return 0;
}

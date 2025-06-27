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
void givenval(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        int val=9;
        bool found=false;
        for(int i=0;i<=top;i++){
            if(arr[i]==val){
                cout<<"value found :- "<<arr[i]<<endl;
                found=true;
               
                for(int j = i; j < top; j++){
                    arr[j] = arr[j + 1];
                }
                
                top--;  
                break; 
            }
            
        }
        if(! found){
            cout<<"not found value";
        }
    }
}

int main() {
    push(7);
    push(4);
    push(289);
    push(9);
    push(1);
    push(0);
    givenval();
    display();
    
    return 0;
}

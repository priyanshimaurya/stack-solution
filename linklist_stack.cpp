#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
};
class stack{
    private:
    Node* top;
    public:
    stack(){
        top=NULL;
    }
    void push(int data){
        Node* newnode=new Node();
        newnode->val=data;
        newnode->next=top;
        top=newnode;
    }
    void pop(){
        Node* temp=top;
        top=temp->next;
        cout<<"poped element from stack is: "<<temp->val<<endl;
        delete temp;
    }
    void display(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
        }
        Node*temp=top;
        cout<<"stack element are: "<<endl;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void getTop(){
        if(top==NULL){
            cout<<"Stcak is empty"<<endl;
        }
        cout<<"Top value is:- "<<top->val<<endl;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();
    st.pop();
    st.push(7);
    st.push(8);
    st.pop();
    st.getTop();
    st.display();
    


}
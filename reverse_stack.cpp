#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
void reverse(stack <int> sta){
    stack <int>qu;
    while (!sta.empty())
    {
        qu.push(sta.top());
        sta.pop();
    }
    while (!qu.empty())
    {
        sta.push(qu.top());
        qu.pop();
    }
}

int main(){
    stack<int> st1;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    st1.push(50);

    cout<<"------------test case 1st----------------"<<endl;

    reverse(st1);
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;

    stack<int> st2;
    st2.push(6);
    st2.push(5);
    st2.push(4);
    
    cout<<"------------test case 2nd----------------"<<endl;
    reverse(st2);
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
   
    return 0;
}
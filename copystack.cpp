#include<iostream>
#include<stack>
using namespace std;
stack<int> copystack(stack<int> & given){
    stack<int> secondstack;
    while(! given.empty()){
        int curr=given.top();
        given.pop();
        secondstack.push(curr);
    }
    stack<int> result;
    while(! secondstack.empty()){
        int curr=secondstack.top();
        secondstack.pop();
        result.push(curr);
    }
    return result;
};

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    
    stack<int> res = copystack(st);
    
   
    while (!res.empty()) {
        cout << res.top() << " ";
        res.pop();
    }
    cout << endl;
    return 0;
}

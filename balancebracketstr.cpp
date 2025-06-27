#include<iostream>
#include<stack>
using namespace std;
bool balancebracket(string str){
stack<char> st;
for(int i=0;i<str.size();i++){
    char ch=str[i];
    if( ch=='(' ||ch=='{'|| ch=='['){
        st.push(ch);
    }
    else{
        if(st.empty()){
            return false;
        }
        else if(ch==')'&& st.top()=='('){
            st.pop();
        }
        else if(ch=='}'&& st.top()=='{'){
            st.pop();
        }
        else if(ch==']'&& st.top()=='['){
            st.pop();
        }
        

    }
}
return st.empty();
}
int main(){
    string str="{{(){[]}}}";
    cout<<balancebracket(str)<<endl;
    return 0;
}
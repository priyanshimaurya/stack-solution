// // // // // #include <iostream>
// // // // // #include <stack>
// // // // // #include <string>

// // // // // using namespace std;

// // // // // void removeduplicate(string a1[], string a2[], int s1, int s2) {
// // // // //     stack<char> result;
// // // // //         for (int i = 0; i < s1; i++) {
// // // // //         for (char ch : a1[i]) {
// // // // //             bool isDuplicate = false;
// // // // //             for (int j = 0; j < s2; j++) {
// // // // //                 if (a2[j].find(ch) != string::npos) {
// // // // //                     isDuplicate = true;
// // // // //                     break;
// // // // //                 }
// // // // //             }
// // // // //             if (!isDuplicate) {
// // // // //                 result.push(ch);
// // // // //             }
// // // // //         }
// // // // //     }

    
// // // // //     while (!result.empty()) {
// // // // //         cout << result.top();
// // // // //         result.pop();
// // // // //     }
// // // // //     cout << endl;
// // // // // }

// // // // // int main() {
// // // // //     string a1[] = {"computer"};
// // // // //     string a2[] = {"cat"};
// // // // //     int s1 = sizeof(a1) / sizeof(a1[0]);
// // // // //     int s2 = sizeof(a2) / sizeof(a2[0]);

// // // // //     removeduplicate(a1, a2, s1, s2);
// // // // //     return 0;
// // // // // }


// // // // #include <iostream>
// // // // #include <stack>
// // // // using namespace std;

// // // // void reversestring( int arr[],int size) {
// // // //     stack<int> element;

    
// // // //     for (int i = 0; i < size; i++) {
// // // //         element.push(arr[i]);
        
// // // //     }
// // // //     while (!element.empty()) {
// // // //         cout << element.top(); 
// // // //         cout<<" ";
// // // //         element.pop(); 
// // // //     }
// // // //     cout << endl;
// // // // }

// // // // int main() {
// // // //     int  arr[] = {100,200,300,400};
// // // //     int size=sizeof(arr)/sizeof(arr[0]);
// // // //     cout<<"before reversed : ";
        
// // // //     for(int i=0;i<size;i++){
        
// // // //         cout<<arr[i]<<" ";
// // // //     }
// // // //     cout<<endl;
// // // //     cout<<"after reversed : ";
// // // //     reversestring(arr,size);
// // // //     return 0;
// // // // }
// // // #include <iostream>
// // // #include <stack>
// // // #include <queue>
// // // using namespace std;

// // // void reverseStackTopQueue(stack<int>& a1) {
// // //     queue<int> qu; 
// // //     while (!a1.empty()) {
// // //         qu.push(a1.top());
// // //         a1.pop(); 
// // //     }
// // //     while (!qu.empty()) {
// // //         a1.push(qu.front());
// // //         qu.pop();
// // //     }
// // // }

// // // int main() {
// // //     stack<int> st;
// // //     st.push(40);
// // //     st.push(30);
// // //     st.push(20);
// // //     st.push(10);

// // //     reverseStackTopQueue(st);
// // //     while (!st.empty()) {
// // //         cout << st.top() << " ";
// // //         st.pop();
// // //     }
// // //     cout << endl;

// // //     return 0;
// // // }
// // #include<iostream>
// // #include<stack>
// // using namespace std; 
// // void desending (int arr[], int size){
// //     stack<int> element;
// //     int i,j;
// //     for(int i=0;i<size;i++){
// //         for(j=i+1;j<size;j++){
// //             if(arr[i]<arr[j]){
// //                 element.push(arr[i]);
// //             }
// //         }
// //     }
// // }
// // void asending(int arr[],int size){
// //     stack<int> element;
// //     int i,j;
// //     for( i=0;i<size-1;i++){
// //         for( j=i+1;j<=size;j++){
// //             if(arr[i]>arr[j]){
// //                 element.push(arr[i]);
// //             }
// //         }
// //     }
// //         while(!element.empty()){
// //             element.push(arr[i]);
// //             element.pop();
// //         }
// //         cout<<element<<" "<<endl;
// // }
// // int main(){
// //     int arr[]={1,-1,4,-100,20,230,90};
// //     int size=sizeof(arr)/sizeof(arr[0]);
// //     asending(arr,size);
// // }
// #include <iostream>
// using namespace std;

// void printTriplets(int a1[], int size) {
//     bool found = false;
//     for (int i = 0; i < size - 2; i++) {
//         for (int j = i + 1; j < size - 1; j++) {
//             for (int k = j + 1; k < size; k++) {
//                 if (a1[i] + a1[j] + a1[k] == 0) {
//                     cout << "(" << a1[i] << ", " << a1[j] << ", " << a1[k] << ")" << endl;
//                     found = true;
//                 }
//             }
//         }
//     }
//     if (!found) {
//         cout << "No triplets found" << endl;
//     }
// }

// int main() {
//     int arr[] = {0, -1, 2, -3, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printTriplets(arr, size);
//     return 0;
// }
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
class Stack{
    queue<int> q1,q2;
    public:
    void  push(int data){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        while(!q2.empty()){
            q2.push(q1.front());
            q2.pop();
        }
        q2.push(data);
    }
    int pop(){
        int front=q1.front(); 
        q1.pop();
        return front;
    }
};
int main(){
    vector<int> keys={1,2,3,4,5};
    Stack s;
    for (int key: keys) {
        s.push(key);
    }
    for(int i=0; i<keys.size(); i++){
        cout<<s.pop()<<endl;
    }
}

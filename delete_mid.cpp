#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int value) {
        val = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;
    
public:
    Stack() {
        top = NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << "Stack value to be deleted: " << temp->val << endl;
        delete temp;
    }

    void getTop() const {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top value is: " << top->val << endl;
        }
    }

    void isEmpty() const {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack is not empty" << endl;
        }
    }

    void midOfStack() const {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* slow = top;
        Node* fast = top;
        
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        cout << "Middle value is: " << slow->val << endl;
    }
    void display(){
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->val;
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    s.getTop();
    s.midOfStack();
    s.pop();
    s.getTop();
    s.midOfStack();
    
    
  
    
    return 0;
}

#include <iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        arr = new int[size];
        this -> size = size;
        top = -1;
    }

    // Function's:
    void push(int data){
        if(size - top > 1){
            // Space Available
            top++;
            arr[top] = data;
        }

        else{
            // Space Not Available
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top != -1){
            // Stack Not Empty
            top--;
        }
        else{
            // Stack Empty
            cout << "Stack Underflow" << endl;
        }
    }

    int getTop(){
        if(top == -1){
            cout << "Element not Exist" << endl;
        }
        else{
            return arr[top];
        }
    }

    int getSize(){
        // Return Number of Valid Elements present in the Stack
        return top + 1;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack s(5);

    // Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Stack is: ";
    while(!s.isEmpty()){
        cout << s.getTop() << " ";
        s.pop();
    } cout << endl;

    cout << "Size of Stack is: " << s.getSize() << endl;
    s.pop();

    return 0;
}

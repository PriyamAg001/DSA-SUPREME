#include <iostream>
#include <stack>
using namespace std;

int main(){
    // Creation:
    stack<int> st;

    // Insertion:
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Remove:
    st.pop();

    // Peak Element:
    cout << "Element at top of Stack: " << st.top() << endl;

    // Size:
    cout << "Size of Stack: " << st.size() << endl;

    if(st.empty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }

    return 0;
}

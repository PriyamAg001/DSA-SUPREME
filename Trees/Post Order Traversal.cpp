// Post Order Traversal CODE:

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node*  left;
    Node* right;

    Node(int data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(int data) {
    if(data == -1){
        return NULL;
    }

    // Case 1:
    Node* root = new Node(data);

    // Case 2: Recursion
    int leftData;
    cout << "Enter data for left child of " << data << endl;
    cin >> leftData;
    root -> left = buildTree(leftData);

    int rightData;
    cout << "Enter data for right child of " << data << endl;
    cin >> rightData;
    root -> right = buildTree(rightData);

    return root;
}

void postOrderTraversal(Node* root){
    //Base Case
    if(root == NULL){
        return;
    }

    // LRN
    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " ";
}

int main(){
    Node* root;
    int data;
    cout << "Enter data for root node: " << endl;
    cin >> data;

    // Creating a Tree
    root = buildTree(data);

    // 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
    // Post Order Traversal
    cout << "Printing Post Order Traversal Output: " << endl;
    postOrderTraversal(root);

    return 0;

}



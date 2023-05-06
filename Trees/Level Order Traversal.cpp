// Level Order Traversal CODE:

#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node* root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // Purana Level Complete Traverse Ho Gya He
            cout << endl;
            if(!q.empty()){
                // Queue Not Empty
                q.push(NULL);
            }
        }

        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

int main(){
    Node* root;
    int data;
    cout << "Enter data for root node: " << endl;
    cin >> data;

    // Creating a Tree
    root = buildTree(data);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Level Order Traversal
    cout << "Printing Level Order Traversal Output: " << endl;
    levelOrderTraversal(root);

    return 0;

}

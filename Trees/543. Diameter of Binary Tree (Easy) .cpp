// 543. Diameter of Binary Tree (Easy)

// Maximum Deepth of a Binary Tree CODE:

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

// LC Function Start
int heightOfTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = heightOfTree(root -> left);
    int rightHeight = heightOfTree(root -> right);
    int maxHeight = max(leftHeight, rightHeight) + 1;
    return maxHeight;
}

int diameterOfBinaryTree(Node* root) {
    if(root == NULL){
            return 0;
    }
    int option1 = diameterOfBinaryTree(root -> left);
    int option2 = diameterOfBinaryTree(root -> right);
    int option3 = heightOfTree(root -> left) + heightOfTree(root -> right);
    int ans = max(option1, max(option2, option3));
    return ans;
}
// LC Function End

int main(){
    Node* root;
    int data;
    cout << "Enter data for root node: " << endl;
    cin >> data;
    root = buildTree(data);

    // Maximum Height of a TREE
    cout << "Diameter of Binary Tree is: " << diameterOfBinaryTree(root) << endl;

    return 0;

}


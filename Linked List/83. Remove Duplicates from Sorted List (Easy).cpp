// 83. Remove Duplicates from Sorted List (Easy)

#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout <<temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void removeDuplicates(Node* head){
    if(head == NULL){
        cout << "Linked List is Empty" << endl;
        return;
    }
    if(head -> next == NULL){
        cout << "Linked List has Single Node" << endl;
        return;
    }

    // >1 Node in Linked List
    Node* curr = head;

    while(curr != NULL){
        if((curr -> next != NULL) && (curr -> data == curr -> next -> data)){
            // Equal
            Node* temp = curr -> next;
            curr -> next = curr -> next -> next;
            // Delete Node
            temp -> next = NULL;
            delete temp;
        }
        else{
            // Not Equal
            curr = curr -> next;
        }
    }
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth= new Node(50);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Input Linked List: ";
    print(head);

    removeDuplicates(head);
    cout << "Output Linked List: ";
    print(head);
    return 0;
}

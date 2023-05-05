// Get Middle Element of Linked List

#include <bits/stdc++.h>
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

Node *getMiddle(Node *&head){
    if (head == NULL){
        cout << "LL is empty" << endl;
    }
    if (head->next == NULL){
        return head;
    }
    // ll have >1 node
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL){
        fast = fast->next;
        if (fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

int getLength(Node *&head){
    Node *temp = head;
    int i = 0;
    while (temp != NULL){
        i++;
        temp = temp->next;
    }
    return i;
}

void traverse(Node *head){
    Node *temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seven = new Node(70);
    Node *eight = new Node(80);
    Node *ninth = new Node(91);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    traverse(first);
    cout << "The middle node is " << getMiddle(first)->data << endl;
    return 0;
}

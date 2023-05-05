// 25. Reverse Nodes in K Groups (Hard)

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

int getLength(Node *&head){
    Node *temp = head;
    int i = 0;
    while (temp != NULL){
        i++;
        temp = temp->next;
    }
    return i;
}

Node *reverseKGroups(Node *&head, int k){
    if (head == NULL){
        cout << "LL is empty" << endl;
        return head;
    }
    int len = getLength(head);
    if (k > len){
        // cout << "enter valid value of k" << endl;
        return head;
    }
    // it means number of nodes in LL is >=k
    // stepp1->reverse first k nodes of ll
    Node *prev = NULL;
    Node *curr = head;
    Node *fwd = curr->next;
    int count = 0;
    while (count < k){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
        count++;
    }

    // step-2 recusive call
    if (fwd != NULL){
        // we still have nodes left to reverse
        head->next = reverseKGroups(fwd, k);
    }
    return prev;
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
    first = reverseKGroups(first, 2);
    traverse(first);
    return 0;
}

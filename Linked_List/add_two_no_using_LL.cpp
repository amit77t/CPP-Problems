#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to reverse a linked list
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* next = NULL;
    Node* curr = head;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev; // Returning new head of the reversed list
}

// Function to add a node at the end (pass tail by reference)
void push_back(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Function to add two numbers represented by linked lists
Node* add(Node* first, Node* second) {
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0) {
        int val1 = (first != NULL) ? first->data : 0;
        int val2 = (second != NULL) ? second->data : 0;

        int sum = carry + val1 + val2;
        int digit = sum % 10;
        carry = sum / 10;

        push_back(ansHead, ansTail, digit);

        if (first != NULL) first = first->next;
        if (second != NULL) second = second->next;
    }

    return ansHead;
}

// Function to add two numbers using linked list representation
Node* addNumber(Node* first, Node* second) {
    first = reverse(first);
    second = reverse(second);

    Node* ans = add(first, second);
    ans = reverse(ans);

    return ans;
}

int main() {
    List ll;
    List ll2;

    ll.push_front(5);
    ll.push_front(4);

    print(ll.head);

    ll2.push_front(5);
    ll2.push_front(4);
    ll2.push_front(3);

    print(ll2.head);

    // Add numbers represented by linked lists
    Node* result = addNumber(ll.head, ll2.head);
    cout << "Sum: ";
    print(result);

    return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert at tail in circular linked list
void insertAtTail(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    
    if (!head) {
        // If list is empty, point the new node to itself
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != head) { // Traverse to last node
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head; // Point new node back to head
}

// Function to print circular linked list
void printList(Node* head) {
    if (!head) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)\n";
}

int main() {
    Node* head = nullptr;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    printList(head);

    return 0;
}

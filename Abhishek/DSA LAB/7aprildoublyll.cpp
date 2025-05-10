#include <iostream>
using namespace std;

// Singly Linked List Node
struct SNode {
    int data;
    SNode* next;
};

// Doubly Linked List Node
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

// Insert into singly linked list at tail
void insertSingly(SNode*& head, int value) {
    SNode* newNode = new SNode{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    SNode* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Convert singly linked list to doubly linked list
DNode* convertToDoubly(SNode* head) {
    if (!head) return nullptr;

    DNode* dHead = nullptr;
    DNode* dTail = nullptr;

    while (head) {
        DNode* newNode = new DNode{head->data, nullptr, nullptr};

        if (!dHead) {
            dHead = dTail = newNode;
        } else {
            dTail->next = newNode;
            newNode->prev = dTail;
            dTail = newNode;
        }

        head = head->next;
    }

    return dHead;
}

// Print doubly linked list forward and backward
void printDoubly(DNode* head) {
    cout << "Forward: ";
    DNode* temp = head;
    DNode* tail = nullptr;
    while (temp) {
        cout << temp->data << " <-> ";
        tail = temp;
        temp = temp->next;
    }
    cout << "NULL\n";

    cout << "Backward: ";
    while (tail) {
        cout << tail->data << " <-> ";
        tail = tail->prev;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    SNode* sHead = nullptr;

    // Insert into singly linked list
    insertSingly(sHead, 10);
    insertSingly(sHead, 20);
    insertSingly(sHead, 30);
    insertSingly(sHead, 40);

    // Convert to doubly linked list
    DNode* dHead = convertToDoubly(sHead);

    // Print the doubly linked list
    printDoubly(dHead);

    return 0;
}

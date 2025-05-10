#include <iostream>
using namespace std;

// Doubly Linked List Node
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

// Insert at tail in doubly linked list
void insertAtTail(DNode*& head, int value) {
    DNode* newNode = new DNode{value, nullptr, nullptr};
    
    if (!head) {
        head = newNode;
        return;
    }

    DNode* temp = head;
    while (temp->next) temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Function to reverse the doubly linked list
void reverseDoublyList(DNode*& head) {
    if (!head) return;

    DNode* current = head;
    DNode* temp = nullptr;

    while (current) {
        // Swap next and prev pointers
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to the next node (which is previous before swap)
        current = current->prev;
    }

    // Update head to the last node
    if (temp) head = temp->prev;
}

// Print list forward
void printForward(DNode* head) {
    cout << "Forward: ";
    while (head) {
        cout << head->data << " <-> ";
        if (!head->next) break;
        head = head->next;
    }
    cout << "NULL\n";
}

// Print list backward from tail
void printBackward(DNode* tail) {
    cout << "Backward: ";
    while (tail) {
        cout << tail->data << " <-> ";
        tail = tail->prev;
    }
    cout << "NULL\n";
}

int main() {
    DNode* head = nullptr;

    // Create doubly linked list
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    cout << "Original List:\n";
    printForward(head);

    // Get tail for backward print
    DNode* tail = head;
    while (tail->next) tail = tail->next;
    printBackward(tail);

    // Reverse the list
    reverseDoublyList(head);

    cout << "\nReversed List:\n";
    printForward(head);

    // Get new tail for backward print
    tail = head;
    while (tail->next) tail = tail->next;
    printBackward(tail);

    return 0;
}

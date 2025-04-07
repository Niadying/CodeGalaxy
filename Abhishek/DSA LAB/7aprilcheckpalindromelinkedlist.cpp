#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end
void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Function to reverse a linked list
Node* reverse(Node* head) {
    Node* prev = nullptr;
    while (head) {
        Node* nextNode = head->next;
        head->next = prev;
        prev = head;
        head = nextNode;
    }
    return prev;
}

// Function to check if the list is palindrome
bool isPalindrome(Node* head) {
    if (!head || !head->next) return true;

    // Step 1: Find middle using slow and fast pointer
    Node *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse second half
    Node* secondHalf = reverse(slow->next);

    // Step 3: Compare first and second half
    Node* firstHalf = head;
    Node* temp = secondHalf;
    while (temp) {
        if (firstHalf->data != temp->data) {
            return false;
        }
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    return true;
}

// Helper to print list (optional)
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    Node* head = nullptr;

    // Example: 1 -> 2 -> 3 -> 2 -> 1
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);

    printList(head);

    if (isPalindrome(head))
        cout << "The linked list is a palindrome.\n";
    else
        cout << "The linked list is NOT a palindrome.\n";

    return 0;
}

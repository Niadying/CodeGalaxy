#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    bool detectLoop() {
        Node *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }

    void createLoop(int pos) {
        if (!head) return;
        Node* temp = head;
        Node* loopNode = nullptr;
        int count = 1;
        while (temp->next) {
            if (count == pos) loopNode = temp;
            temp = temp->next;
            count++;
        }
        temp->next = loopNode;
    }
};

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    
    list.createLoop(2);

    if (list.detectLoop()) cout << "Loop detected\n";
    else cout << "No loop detected\n";

    return 0;
}

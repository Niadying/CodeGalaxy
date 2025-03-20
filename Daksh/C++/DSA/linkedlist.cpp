#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int main(){

    int n;
    cin >> n;

    Node* node1 = new Node(n);
    cout << node1 ->data << "\n";
    cout << node1 ->next << "\n";
}
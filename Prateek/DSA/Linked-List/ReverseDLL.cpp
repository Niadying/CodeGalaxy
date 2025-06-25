#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

    Node(int data, Node* next, Node* prev){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

Node* arrtodll(int nums[], int n ){
    Node* head = new Node(nums[0]);
    Node* mover = head;
    for(int i = 1; i<n; i++){
        Node* temp = new Node(nums[i],nullptr, mover);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void print(Node* head){
    Node* mover = head;
    while(mover){
        cout<<mover->data<<" ";
        mover = mover->next;
    }
}

Node* reversedll(Node* head){
    Node* last = NULL;
    Node* current = head;
    while(current != NULL){
        last = current->prev;
        current->prev = current->next;
        current->next = last;
        current = current->prev;
    }
    return last->prev;
}
int main (){
    int arr[]={1,2,2,3,4,5,6,3};
    Node* head = arrtodll(arr,8);
    Node* Amishaa = reversedll(head);
    print(Amishaa);
}
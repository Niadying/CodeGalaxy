#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int data1, node* next1){
        data = data1;
        next = next1;
    }

    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node* ConvertARRtoLL(vector<int>&arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

// ITERATIVE SOLUTION

node* reverse_ll (node* head){
    node* temp = head;
    node* prev = NULL;
    node* front = head->next;
    if(front == NULL) return head;
    while(temp){
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
        // cout<<temp->data<<" ";
    }
    return prev; 
}

// RECURSIVE SOLUTION

node* reverse_ll_recursive(node* head){
    if(head->next==NULL || head == NULL) return head;
    node* newhead = reverse_ll_recursive(head->next);
    node* front = head->next;
    head->next = NULL;
    front->next = head;
    return newhead;
}

void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" "; temp = temp->next;
    }
    cout<<endl;
}

int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    node* head = ConvertARRtoLL(nums);
    head = reverse_ll_recursive(head);
    // head = reverse_ll(head);
    print(head);
}
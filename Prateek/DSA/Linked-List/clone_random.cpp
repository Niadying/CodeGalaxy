#include<bits/stdc++.h> // LL
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


Node* ConvertARRtoLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" "; temp = temp->next;
    }
    cout<<endl;
}

Node* copyRandomList(Node* head) {

    // OPTIMAL (STORES COPIED NEXT TO ORIGINAL DO THE CHANGES)

    if(!head) return NULL;
    Node* temp = head;
    while(temp){
        Node* newnode = new Node(temp->data);
        newnode->next = temp->next;
        temp->next = newnode;
        temp = newnode->next;
    }
    temp = head;
    while(temp){
        Node* toBeMapped;
        if(temp->random==NULL) toBeMapped = NULL;
        else toBeMapped = temp->random->next;
        temp->next->random = toBeMapped;
        temp = temp->next->next;
    }
    temp = head;
    Node* dummyNode = new Node(-1);
    Node* newHead = dummyNode;
    while(temp){
        newHead->next = temp->next;
        newHead = newHead->next;
        
        temp->next = temp->next->next;
        temp = temp->next;
    }
        return dummyNode->next;

    // BRUTE FORCE (USE MAP TO STORE ORIGINAL AND COPY NODE AND DO OPERATIONS ACCORDING TO IT)

    if(!head) return NULL;
    Node* temp = head;
    Node* dummyNode = new Node(-1);
    Node* newnode = dummyNode;
    map<Node*, Node*>mpp;
    while(temp){
        Node* newNode = new Node(temp->data);
        mpp[temp]=newNode;
        temp = temp->next;
        dummyNode->next = newNode;
        dummyNode = dummyNode->next;
    }
    temp = head;
    Node* newHead = newnode->next;
    Node* mover = newHead;
    while(temp){
        Node* mappedTo;
        if(temp->random==NULL) mappedTo = NULL;
        else mappedTo = mpp[temp->random];
        mover->random = mappedTo;
        temp = temp->next;
        mover = mover->next;
    }
    return newHead;

}

int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    Node* head = ConvertARRtoLL(nums);

}
#include<bits/stdc++.h> // LL
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* bottom;

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

Node* mergeLL(Node* head1, Node* head2){
    Node* mover1 = head1;
    Node* mover2 = head2;
    Node* dummyNode = new Node(-1);
    Node* head = dummyNode;
    while(mover1&&mover2){
        if(mover1->data>mover2->data){
            dummyNode->bottom = mover2;
            mover2 = mover2->bottom;
        }
        else{
            dummyNode->bottom = mover1;
            mover1 = mover1->bottom;
        }
        dummyNode = dummyNode->bottom;
    }
    if(mover1) dummyNode->bottom = mover1;
    else dummyNode->bottom = mover2;
    return head->bottom;
} 


Node* flatten(Node *head) {
    if(!head||!head->next) return head;
    Node* mergedHead = flatten(head->next);
    return mergeLL(head,mergedHead);
    
}


int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    Node* head = ConvertARRtoLL(nums);
    head = flatten(head);
    print(head);
}
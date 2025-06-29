#include<bits/stdc++.h> // LL
using namespace std;
using ll = long long;

class Node{
    public:
    int data;
    Node* next;

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


Node* reverseLL(Node* head){
    if(head==NULL||head->next==NULL) return head;
    Node* newhead = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}


Node* reverseKthGrp(Node* head,ll k){
    Node* temp = head;
    Node* nextnode = head;
    Node* prevnode = NULL;
    while(temp){
        ll cnt = k-1;
        Node* kth = temp;
        while(kth&&cnt--){
            kth = kth->next;
        }
        if(kth==NULL){
            if(prevnode)
            prevnode->next = nextnode;
            break;
        }
        nextnode = kth->next;
        kth->next = NULL;

        Node* newnode = reverseLL(temp);
        if(temp==head){
            head = newnode;
        }
        else{
            prevnode->next = newnode;
        }
        prevnode = temp;
        temp = nextnode;

    }
    return head;
}

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


int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    Node* head = ConvertARRtoLL(nums);
    Node* newhead = reverseKthGrp(head,3);
    print(newhead);

}
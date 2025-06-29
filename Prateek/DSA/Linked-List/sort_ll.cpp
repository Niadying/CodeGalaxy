#include<bits/stdc++.h> // LL
using namespace std;

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

Node* findMiddle(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* fast = head->next;    // LITTLE MODIFICATION IN TORTOISE AND HARE ALGO...
    Node* slow = head;  
    while(fast&&fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* merge(Node* head1, Node* head2){
    Node* mover1 = head1;
    Node* mover2 = head2;
    Node* dummyNode = new Node(-1);
    Node* newHead = dummyNode;
    while(mover1||mover2){
        if(mover1&&mover2){
            if(mover1->data > mover2->data){
                dummyNode->next = mover2;  
                mover2 = mover2->next;
            }
            else{
                dummyNode->next = mover1;
                mover1 = mover1->next;
            }
        }
        else if (mover1){
            dummyNode->next = mover1;
            mover1 = mover1->next;
        }
        else{
            dummyNode->next = mover2;
            mover2 = mover2->next;
        }
        dummyNode = dummyNode->next;
    }
    return newHead->next;
}

Node* sortLL(Node* head){
    // WE WILL SOLVE IT USING MERGE SORT
    if(head==NULL||head->next==NULL) return head;
    Node* middle = findMiddle(head);
    Node* leftHead = head;
    Node* rightHead = middle->next;
    middle->next = NULL;
    leftHead = sortLL(leftHead);
    rightHead = sortLL(rightHead);
    return merge(leftHead,rightHead);
}


int main (){
vector<int>nums={0,3,0,5,2,0,0,7,1,6,0,8,2,0,0,7};
    Node* head = ConvertARRtoLL(nums);
    head = sortLL(head);
    print(head);

}
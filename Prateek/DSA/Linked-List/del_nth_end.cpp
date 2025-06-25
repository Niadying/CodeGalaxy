#include<bits/stdc++.h>
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
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


Node* del_nth_end(Node* head, int n){
    Node* fast= head;
    int cnt = 0;
    Node* slow = head;
    while(n-- && fast!=NULL){
        fast = fast->next;
    }
    if(fast == NULL){
        Node* delnode = head;
        head = head->next;
        delete(delnode);
        return head;
    }
    while(fast->next!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    Node* delnode = slow->next;
    slow->next = slow->next->next;
    delete(delnode);
    return head;
}

int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    Node* head = ConvertARRtoLL(nums);

    head = del_nth_end(head,10);
    print(head);
}

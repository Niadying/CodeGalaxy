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

Node* rotateLL(Node* head, int k){
    if(head==NULL || head->next==NULL) return head;
        int length = 0;
        Node* temp = head;
        while(temp){
            length++;
            temp = temp->next;
        }
        k = k%length;
        if(k==0) return head;
        
        int toReach = length-k-1;
        temp = head;

        while(toReach--){
            temp = temp->next;
        } 
        Node* nextNode = temp->next;
        Node* newNode = nextNode;
        temp->next = NULL;
        while(nextNode && nextNode->next){
            nextNode = nextNode->next;
        }
        if(nextNode)
        nextNode->next = head;
        return newNode;
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

}
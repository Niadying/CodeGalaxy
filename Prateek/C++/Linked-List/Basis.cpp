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

void Traverse(Node*head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int length_N_find (Node* head,int n){
    Node* temp = head;
    int cnt = 0;
    bool found = false;
    while(temp){
        cnt++;
        if(temp->data == n) found = true;
        temp=temp->next;
    }
    if(found == true)cout<<n<<" is present in LL ";
    else cout<<n<<" isn't present in LL ";
    cout<<endl;
    return cnt;
}

int main (){

    vector<int>arr = {1,2,3,4,5};
    Node* head = ConvertARRtoLL(arr);
    cout<<head->data<<endl;
    Traverse(head); cout<<endl;
    cout<<"Length of LL is : "<<length_N_find(head,89);

}
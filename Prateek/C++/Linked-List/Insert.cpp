#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int data1){
        data = data1;
        next = nullptr;    
    }
};

node* arrtoll(vector<int>arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

node* inserthead(node*head,int n){
    node* ins = new node(n);
    ins->next = head;
    return ins;
}

node* insertlast(node*head, int n){
    node* temp = head;
    node* ins = new node(n);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ins;
    return head;
}

node* insert_kth(node* head, int n, int k ){

    if(head==NULL){
        if(k==1)
        return new node(n);
        return head;
    }
    if(k==1){
        node* temp = new node(n);
        temp->next = head;
        return temp;
    }
    node* newnode = new node(n);
    node* temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        if(cnt == k-1){
            newnode->next = temp->next;
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

node* insert_val(node* head,int n, int val){
    if(head==NULL) return NULL;
    if(head->data==val){
        node* temp = new node(n);
        temp->next = head;
        return temp;
    }
    node* temp = head;
    node* ins = new node(n);
    while(temp->next != NULL){
        if(temp->next->data == val){
            ins->next = temp->next;
            temp->next = ins;
            break;
        }
        temp = temp->next;
    }
    return head;
}

void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main (){
    vector<int>arr={1,2,3,4,5,6};
    node* head = arrtoll(arr);
    print(inserthead(head,9));
    print(insertlast(head,190));
    print(insert_kth(head,45,5));
    print(insert_val(head,3052007,190));
}

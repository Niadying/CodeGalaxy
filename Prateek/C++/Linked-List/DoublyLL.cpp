#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node* next;
    node* back;
    node(int d, node* n, node* b){
        data = d;
        next = n;
        back = b;
    }

    node(int d){
        data = d;
        next = nullptr;
        back = nullptr;
    }
};

node* arrtodll(vector<int>&nums){
    node* head = new node(nums[0]);
    node* mover = head;
    for(int i = 1; i<nums.size(); i++){
        node* temp = new node(nums[i]);
        temp->back = mover;
        mover->next = temp;
        mover = temp;
    }
    
     
    return head;
}

void print(node* head){
    node* amishaa = head;
    while(head){
        cout<<"Amishaa : "<<amishaa->data<<endl;
        amishaa = amishaa->next;
    }
}

node* deletelast(node* head){
    node* temp = head;
    if(head==NULL || head->next == NULL) return NULL;
    
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    
    node* prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    free(temp->next);
    return head;
}

node* delfirst(node* head){
    node* temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    free(temp);
    return head;
}

node* delkth(node* head, int k){
    node* temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        if(k==cnt) break;
        temp = temp->next;
    }
    node* prev = temp->back;
    node* front = temp->next;

    if(prev==nullptr && front == nullptr){
        free(head);
        return NULL;
    }
    else if (prev==nullptr){
        return delfirst(head);
    }
    else if (front == nullptr){
        return deletelast(head);
    }
    else{
        prev->next = temp->next;
        front->back = temp->back;
        temp->next = nullptr;
        temp->back = nullptr;
        delete(temp);
    }

    return head;
}

node* insertbeforehead(node* head, int k){
    node* newhead = new node(k);
    newhead->next = head;
    head->back = newhead;
    return newhead;
}

node* insertbeforetail(node* head, int k){
    node* mover = head;
    node* temp = new node(k);
    while(mover->next!=nullptr) mover = mover->next;
    if(mover->back == nullptr && mover->next == nullptr){
        insertbeforehead(head, k);
        return head;
    }
    node* prev = mover->back;
    prev->next = temp;
    temp->back = prev;
    temp->next = mover;
    mover->back = temp;
    return head;
}

node* insertbeforekth(node* head, int k , int val){
    int cnt = 0;
    node* mover = head;
    node* newnode = new node(val);
    while(mover){
        cnt++;
        if(cnt==k) break;
        mover = mover->next;
    }

    node* prev = mover->back;

    prev->next = newnode;
    newnode->back = prev;
    mover->back = newnode;
    newnode->next = mover;
    return head;
}

node* insertbefornode(node* temp, int k ){
    
}

int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9};
    node* head = arrtodll(nums);
    // print(head);
    // print(delfirst(head));
    // print(deletelast(head));
    // print(delkth(head,5));
    // print(insertbeforehead(head, 10));
    // print(insertbeforetail(head, 10));
    print(insertbeforekth(head, 6,10));
    return 0;
}
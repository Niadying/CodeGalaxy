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

void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" "; temp = temp->next;
    }
    cout<<endl;
}

node* head(node* head1, node* head2){
    // OPTIMAL
    
    node* t1 = head1;
    node* t2 = head2;
    if(t1==NULL || t2==NULL) return NULL;
    while(t1!=t2){
        t1 = t1->next;
        t2 = t2->next;
        if(t1==t2) return t1;
        if(t1==NULL) t1 = head2;
        if(t2==NULL) t2 = head1;
    }
    return t1;


    // BETTER-> CALCULATE LENGTH OF BOTH LL AND THEN MOVE GREATER ONE N1-N2 DISTANCE SO THAT BOTH ALIGH VERTICALLY AND THEN START COMPARING.
    // BRUTE-> USE MAP TO STORE NODES AND COMPARE IT WITH ANOTHER LL

}

int main (){
    
}
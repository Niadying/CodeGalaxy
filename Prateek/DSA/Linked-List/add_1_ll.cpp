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

node* reversell(node* head){
    if(head==NULL || head->next==NULL) return head;
    node* newnode = reversell(head->next);
    node* front = head->next;
    head->next = NULL;
    front->next = head;
    return newnode;
}


int helper (node* head){

    if(head==NULL) return 1;
    int carry = helper(head->next);
    head->data+=carry;
    if(head->data<10) return 0;
    head->data = 0;
    return 1;

}

node* add1(node* head){


// OPTIMAL

    int carry = helper(head);
    if(carry==1){
        node* newnode = new node(carry);
        newnode->next = head;
        return newnode; 
    }
    return head;


//      BRUTE FORCE

//     head = reversell(head);
//     int carry = 1;
//     node* temp = head;
//     while(temp){
//         int sum = carry+temp->data;
//         carry = sum/10;
//         sum = sum%10;
//         temp->data = sum;
//         temp = temp->next;
//     }
//     head = reversell(head);
//     if(carry) {
//         node* newnode = new node(carry);
//         newnode->next = head;
//         return newnode;
//     }
//     return head;
    
}



int main (){
    vector<int>nums={9,9,9,9,9,9,9,9};
    node* head = ConvertARRtoLL(nums);
    // head = add1(head);
    print(add1(head));

}
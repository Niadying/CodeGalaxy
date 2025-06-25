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
// BRUTE FORCE APPROACH 

// node* odd_evenll(node* head){

//     vector<int>list;
//     node* temp = head;
//     while(temp!=NULL && temp->next != NULL){
//         list.push_back(temp->data);
//         temp = temp->next->next;
//     }
//     if(temp) list.push_back(temp->data);

//     temp = head->next;
//     while(temp!=NULL && temp->next != NULL){
//         list.push_back(temp->data);
//         temp = temp->next->next;
//     }
//     if(temp) list.push_back(temp->data);


//     temp = head;
//     int i = 0;
//     while(temp){
//         temp->data = list[i++];
//         temp = temp->next;
//     }
//     return head;
// }

// OPTIMAL APPROACH

node* odd_evenll(node* head){
    node* odd = head;
    node* even = head->next;
    node* store = even;

    while(even!=NULL && even->next != NULL){
        odd->next = odd->next->next;
        odd = odd->next;
        even->next = even->next->next;
        even = even->next;
    }
    odd->next = store;
    return head;
}

void print(node* head){
    node* mover = head;
    while(mover){
        cout<<mover->data<<" ";
        mover = mover->next;
    }
    cout<<endl;
} 

int main(){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    node* head = ConvertARRtoLL(nums);
    node* temp = odd_evenll(head);
    print(temp);
} 
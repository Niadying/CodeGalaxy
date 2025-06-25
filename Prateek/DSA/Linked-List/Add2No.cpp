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

// node* add2no(node* head1, node* head2){
//     node* mover1 = head1;
//     node* mover2 = head2;
//     node* ans = new node(-1);
//     node* ansmover = ans;
//     int carry = 0;
//     while(mover1 && mover2){
//         int sum = mover1->data + mover2->data + carry;
//         carry = sum/10;
//         node* newnode = new node(sum%10);
//         ansmover->next = newnode;
//         ansmover = newnode;
//         mover1 = mover1->next;
//         mover2 = mover2->next;
//     }

//     while(mover1){
//         int sum = mover1->data + carry;
//         carry = sum/10;
//         node* newnode = new node(sum%10);
//         ansmover->next = newnode;
//         ansmover = newnode;
//         mover1 = mover1->next;
//     }

//     while(mover2){
//         int sum = mover2->data + carry;
//         carry = sum/10;
//         node* newnode = new node(sum%10);
//         ansmover->next = newnode;
//         ansmover = newnode;
//         mover2 = mover2->next;
//     }
//     if(carry){
//         node* newnode = new node(carry);
//         ansmover->next = newnode;
//     }
//     return ans->next;
// }

// ALTER (MORE EASIER)

node* add2no(node* head1, node*head2){
    int carry = 0;
    node* temp1 = head1;
    node* temp2 = head2;
    node* dummyhead = new node(-1);
    node* current = dummyhead;
    while(temp1 || temp2){
        int sum = carry;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;
        node* newnode = new node(sum%10);
        carry = sum/10;
        current->next = newnode;\
        current = newnode;
        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;
    }
    if(carry){
        node* newnode = new node(carry);
        current->next = newnode;
    }
    return dummyhead->next;
}



void print(node* head){
    node* mover = head;
    while(mover){
        cout<<mover->data<<" ";
        mover = mover->next;
    }
    cout<<endl;
}

int main (){
    vector<int>nums1={3,5};
    vector<int>nums2={4,5,9,9};

    node* head1 = ConvertARRtoLL(nums1);
    node* head2 = ConvertARRtoLL(nums2);

    node* ans = add2no(head1, head2);
    print(ans);

}
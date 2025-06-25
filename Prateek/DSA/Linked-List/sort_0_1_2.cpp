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
    node* mover = head;
    while(mover){
        cout<<mover->data<<" ";
        mover = mover->next;
    }
    cout<<endl;
} 

// BRUTE FORCE O(2n)

// node* sort012(node* head){
//     int cnt1 = 0 , cnt2 = 0, cnt0 = 0;
//     node* temp = head;
//     while(temp){
//         if(temp->data == 0) cnt0++;
//         if(temp->data == 1) cnt1++;
//         if(temp->data == 2) cnt2++;
//         temp = temp->next;    
//     }
//     temp = head;
//     while(temp){
//         if(cnt0){
//             cnt0--;
//             temp->data = 0;
//         }
//         else if (cnt1){
//             temp->data = 1;
//             cnt1--;    
//         }
//         else {
//             cnt2--;
//             temp->data = 2;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

// OPTIMAL

node* sort012(node* head){

    if(head==NULL || head->next == NULL) return head;
    node* zero = new node(-1);
    node* zerohead = zero;
    node* one = new node(-1);
    node* onehead = one;
    node* two = new node(-1);
    node* twohead = two;
    node* temp = head;
    while(temp){
        if(temp->data == 0){
            zero->next = temp;
            zero = temp;
        }
        else if (temp->data == 1){
            one->next = temp;
            one = temp;
        }
        else {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    if(onehead->next!=NULL){
        zero->next = onehead->next;
    }
    else{
        if(twohead->next!=NULL){
            zero->next = twohead->next;
        }
    }
    if(twohead->next!=NULL)
        one->next = twohead->next;


    return zerohead->next;
}
int main (){
    vector<int>nums={0,0,0,0,2,1,2,1,2,1,2,0};
    node* head = ConvertARRtoLL(nums);
    head = sort012(head);
    print(head);

}
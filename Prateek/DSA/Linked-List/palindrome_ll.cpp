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

node* reverse_ll(node* head){
    if(head==NULL || head->next == NULL) return head;
    node* newnode = reverse_ll(head->next);
    node* front = head->next;
    head->next = NULL;
    front->next = head;
    return newnode;
}
bool check_palindrome(node* head){
    
    // OPTIMAL (REVERSE HALF PORTION BY REACHING AT MIDDLE POINT BY TORTOISE ALGO)

    node* slow = head;
    node* fast = head;
    while(fast->next != NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    node* newnode = reverse_ll(slow->next);
    node* extra = newnode;
    node* temp = head;
    while(newnode){
        if(newnode->data != temp->data) return false;
        newnode = newnode->next;
        temp = temp->next;
    }
    return true;

    reverse_ll(extra);


    
    // BRUTE USING STACK

    // node* temp = head;
    // stack<int>s;
    // while(temp){
    //     s.push(temp->data);
    //     temp = temp->next;
    // }
    // temp = head;
    // while(temp){
    //     if(temp->data != s.top()){
    //         return false;
    //     }
    //     s.pop();
    //     temp = temp->next;
    // }
    // return true;
}
void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" "; temp = temp->next;
    }
    cout<<endl;
}

int main (){
    vector<int>nums={11,2,2,2,11};
    node* head = ConvertARRtoLL(nums);
    cout<<check_palindrome(head);
    // print(head);
}
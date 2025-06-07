#include<bits/stdc++.h> // LL
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

node* delete_middle(node* head){
    node* slow = head;
    // if(temp->next->next == NULL){
    //     node* del = temp->next;
    //     temp->next = NULL;
    //     delete(del);
    //     return head;
    // }
    if(slow->next == NULL || slow == NULL) return NULL;
    node* fast = head->next->next;
    while(fast&&fast->next){
       slow = slow->next;
       fast = fast->next->next;
    }
    node* temp = slow->next;
    slow->next = slow->next->next;
    delete(temp);
    return head;
     
}
int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    node* head = ConvertARRtoLL(nums);

}
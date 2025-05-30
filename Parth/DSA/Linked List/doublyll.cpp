#include<iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* back;

    public:
    node(int data1,node* next1,node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    node(int data1){
        data = data1;
        next = nullptr;
        back= nullptr;
    }
};

node* cnvrtdll(vector<int> &arr){
    node* head= new node(arr[0]); 
    node*  prev = head;
    for(int i =1;i<arr.size();i++){
        node * temp = new node(arr[i],nullptr,prev);
         prev -> next =temp;
         prev =temp;
    }
    return head;
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head= head->next;
    }
}

node* deletehead(node* head){
    if(head == nullptr || head-> next == nullptr) return nullptr;

    node * prev = head;

    head = head->next;
    head-> back=nullptr;
    prev -> next = nullptr;
    delete prev;
    return head;
}

node * deletetail(node* head){
    if(head == nullptr || head->next ==nullptr) return NULL;

    node*prev= head;

    while(prev->next->next!=NULL){
        prev=prev->next;
    }
    prev->next->back= nullptr;
    prev-> next=nullptr;
    delete prev->next;
    return head;

}


int main (){
    vector<int > arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);
      node* head =cnvrtdll(arr);

    head = deletetail(head);
    // head = inserthead(head,100);

    print(head) ;

}


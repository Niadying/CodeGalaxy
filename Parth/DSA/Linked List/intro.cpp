#include<iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int data1,node* next1){
        data = data1;
        next = next1;
    }

    public:
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node *cnvrtarr2ll(vector<int> &arr){
    node* head = new node (arr[0]);
    node* mover= head;
    for (int i =1;i<4;i++){
        node* temp = new node(arr[i]);
        mover -> next = temp;
        mover =temp;
    }
    return head;
}


int search(node *head ,int val){
    node * temp = head;
    while (temp){
        if(temp->data == val)return 1;
       temp = temp->next;
    }
    return 0;
}



int main (){
    vector<int > arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);
    // node* y =new node(arr[0], nullptr);
    // cout<<y->data;

    node* head =cnvrtarr2ll(arr);
    // cout << head-> data;
     node * temp = head;
    //  while (temp){
    //     cout<<temp-> data<<" ";
    //     temp = temp->next;
    //  }

    cout << search(head,5);

}
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

void print(node*head){
    while(head !=NULL){
        cout<< head -> data<<" ";

    }
    cout<<endl;
}

node * removehead(node*head){

    if (head==nullptr) return head;
    node *temp = head;
    head=head->next;
    delete temp;
     return head;


}

int main (){
    vector<int > arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);

    head =removehead(head);
    print(head) ;

}

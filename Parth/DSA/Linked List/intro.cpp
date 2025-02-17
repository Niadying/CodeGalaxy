#include<iostream>
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
};

int main (){
    int arr[4]={2,5,8,7};
    node* y =new node(arr[0], nullptr);
    cout<<y->data;

}
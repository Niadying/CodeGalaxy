#include<iostream>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
    
    node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }

};

int main(){
    node*root= new node(1);

    root->left =new node(2);
    root->right =new node(3);
    root->left->right= new node(5);
    cout<<root->left->right->data;
}

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int dat){
        this->data=dat;
        this->next=NULL;
    }
    
};
void atbeg(Node* &head,int dat){
    Node* temp= new Node(dat);
    temp->next=head;
    head=temp;
}
void atend(Node* &tail,int dat){
    Node* temp=new Node(dat);
    tail->next=temp;
    tail=temp;
}

void print(Node* head){
    Node* temp=head;
    
    if(head==NULL){
        cout<<"the lsit is empty";
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main (){
    Node* start=new Node(100);
    Node* tail=start;
    Node* head=start;
    
    atbeg(head,10);
    atbeg(head,1);
    atend(tail,101);
    atend(tail,200);
    
    print(head);
    
}
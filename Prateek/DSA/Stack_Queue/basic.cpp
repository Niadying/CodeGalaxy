#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// STACK -> LIFO (Last In First Out)
// QUEUE -> FIFO (First In First Out)

// IMPLEMENTING STACKS AND QUEUE USING ARRAYS AND LINKED-LIST....

//STACK USING ARRAYS;

class stImple{
    public:
    int top = -1;
    int st[10];

    void push(int x){
        st[++top]=x;
    }

    int top (){
        if(top==-1) cout<<"Stack Overflow..";
        return st[top];
    }
    int size(){
        return top+1;
    }
    void pop(){
        if(top==-1) cout<<"Stack Underflow..";
        top-=1;
    }
};

// QUEUE USING ARRAYS

class qImple{
    public:
    int start = -1, end = -1, currentSize = 0;
    int q[5];

    void push(int x){
        if(currentSize==0){
            start=0;
            end=0;
            q[start]=x;
        }
        else{
            end = (end+1)%5;
            q[end] = x;
        }
        currentSize++;
    }

    void pop(){
        if(currentSize==1){
            start = -1;
            end = -1;
        }
        else
        start = (start+1)%5;
        currentSize--;    
    }

    int top(){
        if(start!=-1)
        return q[start];
    }
    int size(){
        return currentSize;
    }
};


// STACK USING LL

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class st{
    public:
    int data;
    int size = 0;
    node* top = NULL;

    void push(int data){
        node* newnode = new node(data);
        newnode->next = top;
        newnode = top;
        size++;      
    }
    int top(){
        return top->data;
    }
    void pop(){
        node* del = top;
        top = top->next;
        delete(del);
        size--;
    }
    int size(){
        return size;
    }
};


// QUEUE UISNG LL

class q{
    public:
    node* top = NULL;
    node* last = NULL;
    int size = 0;
    void push(int data){
        node* newnode = new node(data);
        if(top==NULL && last==NULL){
            top->next = newnode;
            top = newnode;
            last = newnode;
        }
        else{
            last->next = newnode;
            last = newnode;
        }
        size++;
    }
    void pop(){
        node* del = top;
        top = top->next;
        delete(del);
        size--;
    }
    int top(){
        return top->data;
    }
    int size(){
        return size;
    }
};